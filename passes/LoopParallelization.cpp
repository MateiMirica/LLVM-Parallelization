#include <iostream>
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Support/raw_ostream.h"
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/sequenced_index.hpp>
#include <utility>
#include <algorithm>

using namespace llvm;

struct Bounds {
    bool isKnown;
    int lowerBound;
    int upperBound;
};

struct IndexAccess {
    Bounds bounds;
    int coef;
};

struct ArrayIndexAccess {
    bool isKnown;
    int freeCoef;
    std::vector<IndexAccess> linearCombination;
};

struct ArrayAccess {
    Value* baseAccess;
    bool type; // true - read ; false - write
    std::vector<ArrayIndexAccess> arrayIndexAccesses;
};

namespace {
    std::string getLoopHeaderAsString(const Loop* L) {
        std::string headerStr;
        raw_string_ostream rso(headerStr);
        L->getHeader()->printAsOperand(rso, /*PrintType=*/false);
        return headerStr;
    }

    std::string extractEquation(const SCEV *S, ScalarEvolution &SE) {
        if (!S)
            return "UnknownExpr";

        if (const auto *C = dyn_cast<SCEVConstant>(S)) {
            return std::to_string(C->getAPInt().getSExtValue());
        }

        if (const auto *AddRec = dyn_cast<SCEVAddRecExpr>(S)) {
            if (const auto *C = dyn_cast<SCEVConstant>(AddRec->getStepRecurrence(SE))) {
                std::string Start = extractEquation(AddRec->getStart(), SE);
                std::string Step = extractEquation(AddRec->getStepRecurrence(SE), SE);
                std::string LoopVar = getLoopHeaderAsString(AddRec->getLoop());
                return Start + " + " + Step + " * " + LoopVar;
            } else {
                return "UnknownExpr";
            }
        }

        if (const auto *SExt = dyn_cast<SCEVSignExtendExpr>(S)) {
            return extractEquation(SExt->getOperand(), SE);
        }

        return "UnknownExpr";
    }

    ArrayType* extractTopLevelArrayType(Value *V) {
        Type *ty = nullptr;
        if (auto *GV = dyn_cast<GlobalVariable>(V)) {
            ty = GV->getValueType();
        } else if (auto *AI = dyn_cast<AllocaInst>(V)) {
            ty = AI->getAllocatedType();
        }
        if (!ty)
            return nullptr;
        return dyn_cast<ArrayType>(ty);
    }

    int countArrayDimensions(Type *ty) {
        int dims = 0;
        while (auto *arrayTy = dyn_cast<ArrayType>(ty)) {
            dims++;
            ty = arrayTy->getElementType();
        }
        return dims;
    }

    void processGEPOperator(GEPOperator *GEPOp, ScalarEvolution &SE, std::vector<std::string>& accesses, int& totalDims) {
        Type *targetTy = GEPOp->getSourceElementType();
        int dims = countArrayDimensions(targetTy);

        if (auto *InnerGEPOp = dyn_cast<GEPOperator>(GEPOp->getPointerOperand())) {
            processGEPOperator(InnerGEPOp, SE, accesses, totalDims);
        }

        int toAdd = totalDims - dims;
        while (toAdd > 0) {
            accesses.push_back("0");
            toAdd--;
        }

        totalDims = dims;

        for (unsigned idx = 2; idx < GEPOp->getNumOperands(); ++idx) {
            Value *IndexVal = GEPOp->getOperand(idx);
            const SCEV *IndexScev = SE.getSCEV(IndexVal);
            accesses.push_back(extractEquation(IndexScev, SE));
            totalDims--;
        }
    }

    void extractGEPIndices(GetElementPtrInst *GEP, ScalarEvolution &SE, std::vector<std::string>& accesses, int& totalDims) {
        Type *targetTy = GEP->getSourceElementType();
        int dims = countArrayDimensions(targetTy);
        if (auto *GEPOp = dyn_cast<GEPOperator>(GEP->getPointerOperand())) {
            processGEPOperator(GEPOp, SE, accesses, totalDims);
        }

        int toAdd = totalDims - dims;
        while (toAdd > 0) {
            accesses.push_back("0");
            toAdd--;
        }

        totalDims = dims;

        for (unsigned idx = 2; idx < GEP->getNumOperands(); ++idx) {
            Value *IndexVal = GEP->getOperand(idx);
            const SCEV *IndexScev = SE.getSCEV(IndexVal);
            accesses.push_back(extractEquation(IndexScev, SE));
            totalDims--;
        }
    }

    std::vector<std::string> extractArrayIndexAccess(Value* ptrOperand, ScalarEvolution &SE, int& totalDims, bool print = false) {
        std::vector<std::string> accesses;
        if (auto *GEP = dyn_cast<GetElementPtrInst>(ptrOperand)) {
            extractGEPIndices(GEP, SE, accesses, totalDims);
        } else if (auto *GEPConst = dyn_cast<ConstantExpr>(ptrOperand)) {
            if (GEPConst->getOpcode() == Instruction::GetElementPtr) {
                Instruction *TempGEP = GEPConst->getAsInstruction();
                extractGEPIndices(cast<GetElementPtrInst>(TempGEP), SE, accesses, totalDims);
                TempGEP->deleteValue();
            }
        }
        while (totalDims > 0) {
            accesses.push_back("0");
            totalDims--;
        }
        if (print) {
            for (const auto &access : accesses)
                errs() << "  Accessing index: " << access << "\n";
        }
        return accesses;
    }


    Bounds extractConstantBound(std::string stringBound) {
        int sgn = 1, index = 0, value = 0;
        if (stringBound.size() > 0 && stringBound[0] == '-') {
            sgn = -1;
            index++;
        }
        while (index < stringBound.size()) {
            if ('0' <= stringBound[index] && stringBound[index] <= '9') {
                value = value * 10 + stringBound[index] - '0';
            } else {
                return {false, 0, 0};
            }
            index++;
        }
        return {true, 0, value * sgn - 1};
    }

    int extractNumber(std::string& expression, int& index) {
        int sgn = 1, value = 0;
        if (index < expression.size() && expression[index] == '-') {
            sgn = -1;
            index++;
        }
        while (index < expression.size() && '0' <= expression[index] && expression[index] <= '9') {
            value = value * 10 + expression[index] - '0';
            index++;
        }
        return sgn * value;
    }

    ArrayIndexAccess extractArrayIndexAccess(std::string string_access, const std::vector<std::string>& inductionVars, const std::vector<Bounds>& bounds) {
        if (string_access == "UnknownExpr") {
            return {false, 0, std::vector<IndexAccess>()};
        } else {
            int index = 0;
            ArrayIndexAccess arrayIndexAccess;
            arrayIndexAccess.isKnown = true;
            arrayIndexAccess.freeCoef = extractNumber(string_access, index);
            arrayIndexAccess.linearCombination = std::vector<IndexAccess>(inductionVars.size());
            for (int i = 0; i < arrayIndexAccess.linearCombination.size(); ++i)
                arrayIndexAccess.linearCombination[i].bounds = bounds[i];
            while (index < string_access.size()) {
                index += 3;
                int coef = extractNumber(string_access, index);
                index += 4;
                std::string inductionVar = "%" + std::to_string(extractNumber(string_access, index));
                int inductionIndex = std::distance(inductionVars.begin(), std::find(inductionVars.begin(), inductionVars.end(), inductionVar));
                arrayIndexAccess.linearCombination[inductionIndex].coef = coef;
            }
            return arrayIndexAccess;
        }
    }

    std::pair<std::vector<Bounds>, std::vector<std::string> > extractParentLoopBounds(Loop *L, ScalarEvolution &SE, bool print = true) {
        std::vector<std::string> inductionVars;
        std::vector<Bounds> bounds;
        for (Loop *Parent = L; Parent != nullptr; Parent = Parent->getParentLoop()) {
            inductionVars.push_back(getLoopHeaderAsString(Parent));
            const SCEV *TripCount = SE.getBackedgeTakenCount(Parent);
            bounds.push_back(extractConstantBound(extractEquation(TripCount, SE)));
        }

        std::reverse(bounds.begin(), bounds.end());
        std::reverse(inductionVars.begin(), inductionVars.end());

        if (print) {
            std::string padding;
            for (int i = 0; i < inductionVars.size(); ++i) {
                errs() << padding + "Loop induction variable: var_" << i << "(" + inductionVars[i] + ")" << '\n';
                if (bounds[i].isKnown)
                    errs() << padding << "Loop bounds: [ " << bounds[i].lowerBound << ", " << bounds[i].upperBound << " ]" << "\n";
                else
                    errs() << padding << "Loop bounds: [ " << bounds[i].lowerBound << ", unknown ]" << "\n";
                padding += "  ";
            }
            errs() << "\n\n";
        }
        return {bounds, inductionVars};
    }

    void printArrayIndexAccess(ArrayIndexAccess& arrayIndexAccess) {
        if (!arrayIndexAccess.isKnown) {
            errs() << "UnknownExpr";
        } else {
            errs() << arrayIndexAccess.freeCoef;
            for (int i = 0; i < arrayIndexAccess.linearCombination.size(); ++i) {
                IndexAccess indexAccess = arrayIndexAccess.linearCombination[i];
                errs() << " + var_" << i << "[ " << indexAccess.bounds.lowerBound << ", " << indexAccess.bounds.upperBound << " ]" << " * " << indexAccess.coef;
            }
        }
    }

    void printArrayAccess(ArrayAccess arrayAccess) {
        if (arrayAccess.type == true)
            errs() << "Load in: " << *(arrayAccess.baseAccess) << "\n";
        else
            errs() << "Store in: " << *(arrayAccess.baseAccess) << "\n";
        for (ArrayIndexAccess arrayIndexAccess : arrayAccess.arrayIndexAccesses) {
            errs() << "Array index access: ";
            printArrayIndexAccess(arrayIndexAccess);
            errs() << "\n";
        }
    }

    static Value* getBasePointer(Value *V, std::unordered_map<Value*, Value*> &baseMap) {
        V = V->stripPointerCasts();
        if (baseMap.count(V))
            return getBasePointer(baseMap[V], baseMap);
        if (auto *CE = dyn_cast<ConstantExpr>(V)) {
            if (CE->getOpcode() == Instruction::GetElementPtr)
                return getBasePointer(CE->getOperand(0)->stripPointerCasts(), baseMap);
        }
        if (auto *GEP = dyn_cast<GetElementPtrInst>(V))
            return getBasePointer(GEP->getOperand(0)->stripPointerCasts(), baseMap);
        if (auto *LI = dyn_cast<LoadInst>(V))
            return getBasePointer(LI->getOperand(0)->stripPointerCasts(), baseMap);
        return V;
    }

    bool isSafeParallelizable(const ArrayAccess& access1, const ArrayAccess& access2) {
        // TODO: implement the four tests
        // return test1(access1, access2) || test2(access1, access2) || test3(access1, access2) || test4(access1, access2);
        return true;
    }

    struct LoopParallelization : PassInfoMixin<LoopParallelization> {
        PreservedAnalyses run(Loop &L, LoopAnalysisManager &LAM,
                              LoopStandardAnalysisResults &AR, LPMUpdater &U) {
            if (!L.getSubLoops().empty()) {
                return PreservedAnalyses::all();
            }

            ScalarEvolution &SE = AR.SE;

            errs()<< "Analysing loop: " << L.getLocStr() << "\n";

            auto [bounds, inductionVars] = extractParentLoopBounds(&L, SE, /* print = */ false);

            std::unordered_map<Value*, Value*> baseMap;
            std::vector<ArrayAccess> arrayAccesses;

            for (BasicBlock *BB : L.blocks()) {
                for (Instruction &I : *BB)
                {
                    if (auto *Store = dyn_cast<StoreInst>(&I))
                    {
                        Value *ptrOperand = Store->getOperand(1);
                        Value *base = getBasePointer(ptrOperand, baseMap);
                        int totalDims = countArrayDimensions(extractTopLevelArrayType(base));
                        std::vector<std::string> accesses = extractArrayIndexAccess(ptrOperand, SE, totalDims, /* print = */ false);
                        ArrayAccess arrayAccess;
                        arrayAccess.baseAccess = base;
                        arrayAccess.type = false;
                        for (std::string access : accesses) {
                            ArrayIndexAccess arrayIndexAccess = extractArrayIndexAccess(access, inductionVars, bounds);
                            arrayAccess.arrayIndexAccesses.push_back(arrayIndexAccess);
                        }
                        arrayAccesses.push_back(arrayAccess);
                        printArrayAccess(arrayAccess);
                    }
                    else if (auto *Load = dyn_cast<LoadInst>(&I))
                    {
                        Value *ptrOperand = Load->getOperand(0);
                        Value *base = getBasePointer(ptrOperand, baseMap);
                        int totalDims = countArrayDimensions(extractTopLevelArrayType(base));
                        std::vector<std::string> accesses = extractArrayIndexAccess(ptrOperand, SE, totalDims, /* print = */ false);
                        ArrayAccess arrayAccess;
                        arrayAccess.baseAccess = base;
                        arrayAccess.type = true;
                        for (std::string access : accesses) {
                            ArrayIndexAccess arrayIndexAccess = extractArrayIndexAccess(access, inductionVars, bounds);
                            arrayAccess.arrayIndexAccesses.push_back(arrayIndexAccess);
                        }
                        arrayAccesses.push_back(arrayAccess);
                        printArrayAccess(arrayAccess);
                    }
                    else if (auto *GEP = dyn_cast<GetElementPtrInst>(&I))
                    {
                        Value *ptrOperand = GEP->getOperand(0)->stripPointerCasts();
                        Value *base = getBasePointer(ptrOperand, baseMap);
                        baseMap[GEP] = base;
                    }
                }
            }

            bool isParallelizable = true;
            for (int i = 0; i < arrayAccesses.size(); ++i) {
                for (int j = i + 1; j < arrayAccesses.size(); ++j) {
                    if (arrayAccesses[i].baseAccess == arrayAccesses[j].baseAccess &&
                            (!arrayAccesses[i].type || !arrayAccesses[j].type)) {
                        isParallelizable &= isSafeParallelizable(arrayAccesses[i], arrayAccesses[j]);
                    }
                }
            }

            if (isParallelizable) {
                errs() << "Loop is safe to be parallelized" << "\n";
            }

            errs() << "==============================\n";
            return PreservedAnalyses::all();
        }

        static bool isRequired() { return true; }
    };
}

// Boilerplate registration code.
llvm::PassPluginLibraryInfo getParallelizePassInfo() {
    const auto callback = [](PassBuilder &PB) {
        PB.registerPipelineParsingCallback(
                [&](StringRef name, LoopPassManager &LPM,
                    ArrayRef<PassBuilder::PipelineElement>) {
                    if (name == "loop-parallelization") {
                        LPM.addPass(LoopParallelization());
                        return true;
                    }
                    return false;
                });
    };
    return {LLVM_PLUGIN_API_VERSION, "LoopParallelization", LLVM_VERSION_STRING, callback};
}

extern "C" LLVM_ATTRIBUTE_WEAK PassPluginLibraryInfo llvmGetPassPluginInfo() {
    return getParallelizePassInfo();
}
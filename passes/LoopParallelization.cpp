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
                if (Start == "UnknownExpr" || Step == "UnknownExpr" || LoopVar == "UnknownExpr")
                    return "UnknownExpr";
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
        if (!ty)
            return -1;
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

    /*
     * Check if access1[index].linear_combination - access2[index].linear_combination contain 0 on all dimensions.
     * Return true if there is a dimension where 0 is not covered -> there is no dependency.
     */
    bool BanerjeeTest(const ArrayAccess& access1, const ArrayAccess& access2) {
        for (int index = 0; index < access1.arrayIndexAccesses.size(); ++index) {
            ArrayIndexAccess indexAccess1 = access1.arrayIndexAccesses[index];
            ArrayIndexAccess indexAccess2 = access2.arrayIndexAccesses[index];
            if (!indexAccess1.isKnown || !indexAccess2.isKnown)
                continue;
            int lb = indexAccess1.freeCoef - indexAccess2.freeCoef, ub = indexAccess1.freeCoef - indexAccess2.freeCoef;
            std::vector<IndexAccess> linear_difference;
            bool unknown_boundary = false;
            for (int i = 0; i < indexAccess1.linearCombination.size() - 1; ++i) {
                int coef = indexAccess1.linearCombination[i].coef - indexAccess2.linearCombination[i].coef;
                linear_difference.push_back({indexAccess1.linearCombination[i].bounds, coef});
            }
            if (indexAccess1.linearCombination.size() > 0) {
                int last_index = indexAccess1.linearCombination.size() - 1;
                int coef = indexAccess1.linearCombination[last_index].coef;
                linear_difference.push_back({indexAccess1.linearCombination[last_index].bounds, coef});

                coef = -indexAccess2.linearCombination[last_index].coef;
                linear_difference.push_back({indexAccess2.linearCombination[last_index].bounds, coef});
            }
            for (auto index_bound : linear_difference) {
                if (index_bound.coef != 0) {
                    if (!index_bound.bounds.isKnown) {
                        unknown_boundary = true;
                        break;
                    }
                    int delta_lb = index_bound.coef * index_bound.bounds.lowerBound, delta_ub = index_bound.coef * index_bound.bounds.upperBound;
                    lb += std::min(delta_lb, delta_ub);
                    ub += std::max(delta_lb, delta_ub);
                }
            }
            if (unknown_boundary)
                continue;
            if (ub < 0 || lb > 0)
                return true;
        }
        return false;
    }

    /*
     * Implement the strong SIV test. In a nested loop format:
     * for (i1)
     *  for (i2)
     *  ..
     *   for (in)
     *     <LINEAR_COMBINATION_1 (i1, ..., i(n-1)) + a*in+c1, LINEAR_COMBINATION_2 (i1, ..., i(n-1)) + a*in'+c2>
     * The last for loop (in) can be parallelized if:
     *  1. LINEAR_COMBINATION_1 (i1, ..., i(n-1)) = LINEAR_COMBINATION_2 (i1, ..., i(n-1))
     *  2. let d = in'-in = (c1-c2)/a
     *      a. |d| < U-L
     *      b. d is an integer
     */
    bool StrongSIVTest(const ArrayAccess& access1, const ArrayAccess& access2) {
        for (int index = 0; index < access1.arrayIndexAccesses.size(); ++index) {
            ArrayIndexAccess indexAccess1 = access1.arrayIndexAccesses[index];
            ArrayIndexAccess indexAccess2 = access2.arrayIndexAccesses[index];
            if (!indexAccess1.isKnown || !indexAccess2.isKnown)
                continue;
            int free_coef = indexAccess1.freeCoef - indexAccess2.freeCoef;
            std::vector<IndexAccess> linear_difference;
            bool different_linear_combination = false;
            for (int i = 0; i < indexAccess1.linearCombination.size() - 1; ++i) {
                int coef = indexAccess1.linearCombination[i].coef - indexAccess2.linearCombination[i].coef;
                if (coef != 0) {
                    different_linear_combination = true;
                    break;
                }
            }
            if (different_linear_combination)
                continue;
            if (indexAccess1.linearCombination.size() > 0) {
                int last_index = indexAccess1.linearCombination.size() - 1;
                int coef1 = indexAccess1.linearCombination[last_index].coef;
                int coef2 = indexAccess2.linearCombination[last_index].coef;
                if (coef1 != coef2 || coef1 == 0)
                    continue;
                if (free_coef % coef1 != 0)
                    return true;
                int d = free_coef / coef1;
                if (d < 0)
                    d = -d;
                if (indexAccess1.linearCombination[last_index].bounds.isKnown) {
                    if (d > indexAccess1.linearCombination[last_index].bounds.upperBound - indexAccess1.linearCombination[last_index].bounds.lowerBound)
                        return true;
                }
            }
        }
        return false;
    }


    bool SameAccess(const ArrayAccess& access1, const ArrayAccess& access2) {
        for (int index = 0; index < access1.arrayIndexAccesses.size(); ++index) {
            ArrayIndexAccess indexAccess1 = access1.arrayIndexAccesses[index];
            ArrayIndexAccess indexAccess2 = access2.arrayIndexAccesses[index];
            if (!indexAccess1.isKnown || !indexAccess2.isKnown)
                continue;
            if (indexAccess1.freeCoef != indexAccess2.freeCoef)
                return false;
            for (int i = 0; i < indexAccess1.linearCombination.size(); ++i) {
                if (indexAccess1.linearCombination[i].coef != indexAccess2.linearCombination[i].coef)
                    return false;
            }
        }
        return true;
    }

    bool GCDTest(const ArrayAccess& access1, const ArrayAccess& access2) {
        auto arrayIndexAccesses1 = access1.arrayIndexAccesses;
        auto arrayIndexAccesses2 = access2.arrayIndexAccesses;
        int gcd;

        for(int i = 0;i < access1.arrayIndexAccesses.size(); i++)
        {
            if (!arrayIndexAccesses1[i].isKnown || !arrayIndexAccesses2[i].isKnown)
                continue;
            std::vector<int> coefficients;

            auto linearCombination1 = arrayIndexAccesses1[i].linearCombination;
            auto linearCombination2 = arrayIndexAccesses2[i].linearCombination;
            int currentIndex = linearCombination1.size() - 1;
            int freeRemainingCoef = arrayIndexAccesses2[i].freeCoef - arrayIndexAccesses1[i].freeCoef;

            for(int j = 0;j < access1.arrayIndexAccesses[i].linearCombination.size();j++)
            {
                if (j == currentIndex)
                {
                    if (linearCombination1[j].coef != 0)
                        coefficients.push_back(linearCombination1[j].coef);
                    if (linearCombination2[j].coef != 0)
                        coefficients.push_back(linearCombination2[j].coef);
                }
                else
                {
                    int remainingCoef = linearCombination1[j].coef - linearCombination2[j].coef;
                    if (remainingCoef != 0)
                        coefficients.push_back(remainingCoef);
                }
            }
            gcd = 0;
            for(int j = 0; j < coefficients.size();j++)
            {
                gcd = std::gcd(gcd, coefficients[j]);
            }
            if (gcd != 0 && freeRemainingCoef % gcd != 0)
                return true;
        }
        return false;
    }

    bool ZIVTest(const ArrayAccess& access1, const ArrayAccess& access2)
    {
        auto arrayIndexAccesses1 = access1.arrayIndexAccesses;
        auto arrayIndexAccesses2 = access2.arrayIndexAccesses;
        for(int i = 0;i < access1.arrayIndexAccesses.size(); i++)
        {
            if (!arrayIndexAccesses1[i].isKnown || !arrayIndexAccesses2[i].isKnown)
                continue;
            bool onlyFreeCoefficients = true;
            auto linearCombination1 = arrayIndexAccesses1[i].linearCombination;
            auto linearCombination2 = arrayIndexAccesses2[i].linearCombination;
            for (int j = 0;j < linearCombination1.size();j++)
            {
                if (linearCombination1[j].coef != 0 || linearCombination2[j].coef != 0)
                {
                    onlyFreeCoefficients = false;
                    break;
                }
            }
            if (onlyFreeCoefficients == true && arrayIndexAccesses1[i].freeCoef != arrayIndexAccesses2[i].freeCoef)
                return true;
        }
        return false;
    }

    bool isSafeParallelizable(const ArrayAccess& access1, const ArrayAccess& access2) {
         return BanerjeeTest(access1, access2) || StrongSIVTest(access1, access2) || SameAccess(access1, access2) ||
             GCDTest(access1, access2) || ZIVTest(access1, access2);
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

            bool skip_loop = false;

            for (BasicBlock *BB : L.blocks()) {
                for (Instruction &I : *BB)
                {
                    if (auto *Store = dyn_cast<StoreInst>(&I))
                    {
                        Value *ptrOperand = Store->getOperand(1);
                        Value *base = getBasePointer(ptrOperand, baseMap);
                        int totalDims = countArrayDimensions(extractTopLevelArrayType(base));
                        if (totalDims == -1) // ptr param
                            skip_loop = true;
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
                        if (totalDims == -1) // ptr param
                            skip_loop = true;
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
            if (!skip_loop) {
                for (int i = 0; i < arrayAccesses.size(); ++i) {
                    for (int j = i + 1; j < arrayAccesses.size(); ++j) {
                        if (arrayAccesses[i].baseAccess == arrayAccesses[j].baseAccess &&
                            (!arrayAccesses[i].type || !arrayAccesses[j].type)) {
                            isParallelizable &= isSafeParallelizable(arrayAccesses[i], arrayAccesses[j]);
                        }
                    }
                }
            } else {
                isParallelizable = false;
            }

            if (isParallelizable) {
                errs() << "Loop is safe to be parallelized" << "\n";
            }
            else
            {
                errs() << "Loop is not safe to be parallelized" << "\n";
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
# LLVM-Parallelization

This GitHub repository homes the implementation of a static-analysis based parallelization tool, implemented as a loop pass in LLVM. 
Working directly on the LLVM intermediate representation (IR), this tool analyzes the innermost loops in loop nests for parallelization 
by employing four data dependency tests, to check for any loop-carried dependencies between different accesses to the same array. The approximate dependency tests we
implemented are the Zero and Strong Single Index Variable tests, the greatest common divisor (GCD) test, and Banerjee's inequality test.
An approximate dependency test cannot say for sure whether there are dependencies or not, however when it reports that there are none,
this is guaranteed to be true.
If at least one of the tests reports no loop-carried dependencies, then the innermost loop can be safely parallelized, and the tool 
annotates it as such. 

To test our work, we ran the pass on the test suite for vectorizing compilers (TSVC), represented by the "tsvc.c" file, 
and on a generated dataset where the loop nests and array accesses are randomly created. Experiments have shown that the GCD and Banerjee 
tests are very useful when used in combination upon increased complexity in the equations forming array accesses, and since they are more general,
detect much more safe loops than the Zero and Strong Single Index Variable tests. 
This tool provides a practical foundation to static-analysis based parallelization, and can be further developed to analyze whole
loop nests, to automatically parallelize them, rather than just annotating, to add more dependency tests, and more.

The project was tested using LLVM Version: 20

The first step is to clone the LLVM repository (https://github.com/llvm/llvm-project).

Then, create a build directory and enter it.
```
mkdir build && cd build
```

To run the pass on a file (test.cpp for example), run the following command:

Running the pass (Linux):
```
cmake -G Ninja -DLLVM_DIR=\$HOME/llvm-install/lib/cmake/llvm .. && \
ninja && \
\$HOME/llvm-install/bin/clang -O0 -S -emit-llvm -Xclang -disable-O0-optnone ../test.cpp -o ../test.ll && \
\$HOME/llvm-install/bin/opt -S -p=mem2reg ../test.ll -o ../test_mem2reg.ll && \
\$HOME/llvm-install/bin/opt -S -passes='simplifycfg,loop-simplify' ../test_mem2reg.ll -o ../test_loop.ll && \
\$HOME/llvm-install/bin/opt -load-pass-plugin ./libPCPParallization.so -passes="pcp-parallizer" -disable-output ../test_loop.ll
```

Running the pass (MacOS):

`cmake -G Ninja -DLLVM_DIR=($PATH_TO_LLVM)/build/lib/cmake/llvm .. && ninja && \
clang -S -g -emit-llvm -Xclang -disable-O0-optnone ../test.cpp -o ../test.ll && \
($PATH_TO_LLVM)build/bin/opt -S -passes="mem2reg" ../test.ll -o ../test_mem2reg.ll &&\
($PATH_TO_LLVM)/build/bin/opt -load-pass-plugin ./libLoopParallelization.dylib -passes="loop-parallelization" -disable-output ../test_mem2reg.ll`
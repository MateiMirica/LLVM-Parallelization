# LLVM-Parallelization

This GitHub repository homes the implementation of a static-analysis based parallelization tool, implemented as a loop pass in LLVM. 
Working directly on the LLVM intermediate representation (IR), this tool analyzes the innermost loops in loop nests for parallelization 
by employing four data dependency tests, to check for any loop-carried dependencies between accesses to arrays. The approximate dependency tests we
implemented are the Zero and Strong Single Index Variable tests, the greatest common divisor (GCD) test, and Banerjee's inequality test.
An approximate dependency test cannot say for sure whether there are dependencies or not, however when it reports that there are none,
this is guaranteed to be true.
If at least one of the tests reports no loop-carried dependencies, then the innermost loop can be safely parallelized, and the tool 
annotates it as such. 
To test our work, we ran the pass on the test suite for vectorizing compilers (TSVC), represented by the "tsvc.c" file, 
and on a generated dataset where the loop nests and array accesses are randomly created. Experiments have shown that the GCD and Banerjee 
tests are very useful when used in combination upon increased complexity in the array accesses, and since they are more general,
detect much more safe loops than the Zero and Strong Single Index Variable tests. 
This tool provides a practical foundation to static-analysis based parallelization, and can be further developed to analyze whole
loop nests, to automatically parallelize them, rather than just annotating, to add more dependency tests, and more.

LLVM Version: 


Run command (Matei M.)

`cmake -G Ninja -DLLVM_DIR=/Users/mateimirica/Desktop/llvm-project/build/lib/cmake/llvm .. && ninja && \
clang -S -g -emit-llvm -Xclang -disable-O0-optnone ../test.cpp -o ../test.ll && \
/Users/mateimirica/Desktop/llvm-project/build/bin/opt -S -passes="mem2reg" ../test.ll -o ../test_mem2reg.ll &&\
/Users/mateimirica/Desktop/llvm-project/build/bin/opt -load-pass-plugin ./libLoopParallelization.dylib -passes="loop-parallelization" -disable-output ../test_mem2reg.ll`
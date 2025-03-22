# LLVM-Parallelization

Run command (Matei M.)

`cmake -G Ninja -DLLVM_DIR=/Users/mateimirica/Desktop/llvm-project/build/lib/cmake/llvm .. && ninja && clang -S -g -emit-llvm -Xclang -disable-O0-optnone ../test.cpp -o ../test.ll && /Users/mateimirica/Desktop/llvm-project/build/bin/opt -S -passes="mem2reg" ../test.ll -o ../test_mem2reg.ll && /Users/mateimirica/Desktop/llvm-project/build/bin/opt -load-pass-plugin ./libLoopParallelization.dylib -passes="loop-parallelization" -disable-output ../test_mem2reg.ll`
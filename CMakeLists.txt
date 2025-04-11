# CMAKE USED ON MAC
cmake_minimum_required(VERSION 3.13)
project(LoopParallelization LANGUAGES C CXX)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_library(LoopParallelization SHARED
        passes/LoopParallelization.cpp
        )

llvm_map_components_to_libnames(
        USED_LLVM_LIBS
        Core
        IRReader
        Support
        Analysis
        ScalarOpts
)

target_link_libraries(LoopParallelization PRIVATE ${USED_LLVM_LIBS})

# CMAKE USED ON LINUX

#project(LoopParallelization LANGUAGES C CXX)
#
#find_package(LLVM REQUIRED CONFIG)
#
#message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
#message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
#
#add_library(LoopParallelization SHARED ./passes/LoopParallelization.cpp
#        #        test.cpp
#        tsvc_project/TSVC_2/src/tsvc.c
#        tsvc_project/TSVC_2/src/dummy.c
#        tsvc_project/TSVC_2/src/common.c
#        )
#
#target_compile_features(LoopParallelization PRIVATE cxx_std_17)
#
#target_compile_options(LoopParallelization PRIVATE ${LLVM_CXX_FLAGS})
#target_include_directories(LoopParallelization PRIVATE ${LLVM_INCLUDE_DIRS})
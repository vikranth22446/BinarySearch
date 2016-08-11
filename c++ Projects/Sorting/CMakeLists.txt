cmake_minimum_required(VERSION 3.6)
project(Sorting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(SOURCE_FILES main.cpp insertionSort.cpp print.h selectionSort.cpp bubbleSort.cpp)
add_executable(Sorting ${SOURCE_FILES})
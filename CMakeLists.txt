cmake_minimum_required(VERSION 3.10)
project(TareaCorta)

set(CMAKE_CXX_STANDARD 11)

add_executable(TareaCorta main.cpp Sort/QuickSort.cpp Sort/QuickSort.h PagedArray/PagedArray.cpp PagedArray/PagedArray.h)
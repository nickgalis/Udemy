cmake_minimum_required(VERSION 3.27)
project(Udemy C)

set(CMAKE_C_STANDARD 11)

add_library(Udemy STATIC StringFunctions.c
        cmake-build-debug/string_lib_test.c)

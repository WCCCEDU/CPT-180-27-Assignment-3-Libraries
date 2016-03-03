cmake_minimum_required(VERSION 3.3)
project(lib_reader)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp file_reader.h)
add_library(lib_reader ${SOURCE_FILES})
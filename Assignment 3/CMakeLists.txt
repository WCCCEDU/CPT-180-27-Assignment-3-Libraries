cmake_minimum_required(VERSION 3.3)
project(Assignment3_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES reader.cpp)
# add_executable(Assignment3_1 ${SOURCE_FILES})
add_library(function ${SOURCE_FILES})

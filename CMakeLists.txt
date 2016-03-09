cmake_minimum_required(VERSION 3.3)
project(config_reader)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp reader.h)
add_library (reader ${SOURCE_FILES})
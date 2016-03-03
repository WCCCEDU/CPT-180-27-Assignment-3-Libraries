cmake_minimum_required(VERSION 3.3)
project(Driver)

include_directories("C:/Users/joshu/Desktop/Assignment 3/reader")
link_directories("C:/Users/joshu/Desktop/Assignment 3/reader")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Driver ${SOURCE_FILES})
target_link_libraries(Driver <reader.h>)

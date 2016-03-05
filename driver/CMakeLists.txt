cmake_minimum_required(VERSION 3.3)
project(Driver)

include_directories( "../include/" )
link_directories( "../include/" )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Driver ${SOURCE_FILES})

target_link_libraries(Driver CPT_180_27_Assignment_3_Libraries)

cmake_minimum_required(VERSION 3.3)
project(Libraries)

include_directories("/Users/outla/Documents/WCCC/Semester/CPT-180/libraries/libraries_lib/libraries")
link_directories("/Users/outla/Documents/WCCC/Semester/CPT-180/libraries/libraries_lib/libraries")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp libraries.h )
add_executable(Libraries ${SOURCE_FILES})

target_link_libraries(Libraries <libraries.h>)
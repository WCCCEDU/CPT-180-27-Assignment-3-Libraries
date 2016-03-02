cmake_minimum_required(VERSION 3.3)
project(TestLib)

include_directories("C:\\Users\\Samantha\\Documents\\Schoolwork\\Libraries")
link_directories("C:\\Users\\Samantha\\Documents\\Schoolwork\\Libraries")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(TestLib ${SOURCE_FILES})

target_link_libraries(TestLib lib)

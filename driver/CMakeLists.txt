cmake_minimum_required(VERSION 3.3)
project(Assignment_3_Driver)

include_directories( ./lib )
link_directories( ./lib )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Assignment_3_Driver ${SOURCE_FILES})
target_link_libraries(Assignment_3_Driver config_reader)
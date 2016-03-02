cmake_minimum_required(VERSION 3.3)
project(Driver)

include_directories( ${MY_SOURCE_DIR}/../include)
link_directories( ${MY_SOURCE_DIR}/../include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Driver ${SOURCE_FILES})
target_link_libraries(Driver function)

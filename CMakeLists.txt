cmake_minimum_required(VERSION 3.3)
project(Libraries)

include_directories( C:\\Users\\bonni\\Documents\\progwork\\CPT-180-27-Assignment-3-Libraries\\lib )
link_directories( C:\\Users\\bonni\\Documents\\progwork\\CPT-180-27-Assignment-3-Libraries\\lib )


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
set(LIBRARY_FILES lib/reader.h lib/reader.cpp)
add_executable(Driver ${SOURCE_FILES})
target_link_libraries(Libraries )
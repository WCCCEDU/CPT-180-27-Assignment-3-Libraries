cmake_minimum_required(VERSION 3.3)
project(driver)

include_directories(F:\\College\\Courses\\CPT 180 C++ Programming\\cp_repo\\cp_repo_assign3\\lib_reader.a)
link_directories(F:\\College\\Courses\\CPT 180 C++ Programming\\cp_repo\\cp_repo_assign3\\lib_reaader.a)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(driver ${SOURCE_FILES})
target_link_libraries(driver function)
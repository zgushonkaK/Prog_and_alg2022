cmake_minimum_required(VERSION 3.23)
project(vectora)

set(CMAKE_CXX_STANDARD 20)

add_library(vector_lib vevlib_exec.cpp veclibrary.hpp)
add_executable(vector.test main_tests.cpp veclibrary.hpp)
target_link_libraries(vector.test vector_lib)
add_executable(vector.task mouse_and_cat.cpp veclibrary.hpp)
target_link_libraries(vector.task vector_lib)
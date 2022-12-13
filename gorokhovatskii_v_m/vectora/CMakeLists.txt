cmake_minimum_required(VERSION 3.23)
project(vectora)

set(CMAKE_CXX_STANDARD 20)

add_library(geom geom_exec.cpp geom.hpp)
add_executable(vector.test main_tests.cpp geom.hpp)
target_link_libraries(vector.test geom)
add_executable(vector.task mouse_and_cat.cpp geom.hpp)
target_link_libraries(vector.task geom)

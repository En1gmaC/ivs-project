
cmake_minimum_required(VERSION 3.0)
project(ivs_proj_2)

find_package(GTest REQUIRED)
add_executable(test tests.cpp)
target_link_libraries(test GTest::Main)

cmake_minimum_required(VERSION 3.31)
project(untitled1)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled1 main.cpp
        lab_parts.h)

target_link_libraries(untitled1 PRIVATE stdc++exp)

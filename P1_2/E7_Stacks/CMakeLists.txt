cmake_minimum_required(VERSION 3.23)
project(E7_Stacks)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(E7_Stacks
        source.cpp
        stack.cpp
        stack.h)

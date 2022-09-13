cmake_minimum_required(VERSION 3.23)
project(T5_NotacionInfijaPostfija)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(T5_NotacionInfijaPostfija
        Source.cpp
        stack.cpp
        stack.h)

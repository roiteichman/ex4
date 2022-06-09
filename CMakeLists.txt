cmake_minimum_required(VERSION 3.21)
project(ex4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex4
        test.cpp
        utilities.cpp
        utilities.h
        Cards/Card.cpp
        Cards/Card.h
        Cards/Vampire.cpp
        Cards/Vampire.h)

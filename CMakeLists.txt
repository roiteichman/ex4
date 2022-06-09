cmake_minimum_required(VERSION 3.21)
project(ex4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex4
        Mtmchkin.h
        test.cpp
        utilities.cpp
        utilities.h
        card.cpp
        card.h
        Wizard.h
        Rogue.h
        Player.cpp
        Player.h)

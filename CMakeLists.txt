cmake_minimum_required(VERSION 3.20)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructure main.cpp
        LinklistUnit/utilities.h
        LinklistUnit/utilities.cpp
        LinklistUnit/p38_05.cpp
        LinklistUnit/p38_10.cpp
        LinklistUnit/exercises.cpp
        LinklistUnit/exercise.h
        StackUnit/utilities.h
        StackUnit/utilities.cpp
        StackUnit/exercise.h
        LinklistUnit/p38_11.cpp)

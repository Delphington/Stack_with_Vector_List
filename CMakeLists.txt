cmake_minimum_required(VERSION 3.27)
project(lab_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_2 main.cpp
        Stack.h
        StackImplementation.h
        VectorStack.h
        ListStack.h
        VectorStack.cpp
        ListStack.cpp
        Stack.cpp
        Stack.cpp)

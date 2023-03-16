cmake_minimum_required(VERSION 3.24)
project(C_C__Datastructures)

set(CMAKE_CXX_STANDARD 23)

add_executable(C_C__Datastructures CppDataStructures/main.cpp C-DataStructures/Stack.h C-DataStructures/Queue.h C-DataStructures/main.c CppDataStructures/Queue.h CppDataStructures/ListNode.h)

cmake_minimum_required(VERSION 3.20)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(DataStructure
        sources/array_list.c
        headers/array_list.h
        sources/heap.c
        headers/heap.h
        sources/main.c
        sources/queue.c
        headers/queue.h
        sources/stack.c
        headers/stack.h)

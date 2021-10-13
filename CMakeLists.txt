cmake_minimum_required(VERSION 3.20)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(DataStructure
        array_list.c
        array_list.h
        heap.c
        heap.h
        main.c
        queue.c
        queue.h
        stack.c
        stack.h)

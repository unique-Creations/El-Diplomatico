cmake_minimum_required(VERSION 3.20)
project(El_Diplomatico C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(El_Diplomatico
        graduate_list_generator.c
        LinkedList.c
        LinkedList.h)

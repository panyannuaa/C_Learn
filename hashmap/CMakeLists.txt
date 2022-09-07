cmake_minimum_required(VERSION 3.15)
project(hashmap C)

set(CMAKE_C_STANDARD 99)

add_executable(hashmap main.c hashmap.c hashmap.h)
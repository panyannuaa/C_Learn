cmake_minimum_required(VERSION 3.15)
project(Test_20220512 C)

set(CMAKE_C_STANDARD 99)


add_library( bubble
        bubble.c
        bubble.h
        )

add_library(sort_bubble SHARED
        bubble.c
        bubble.h
        )
add_executable(static_main main.c bubble)
target_link_libraries(static_main bubble)

add_executable(dynamic_main main.c )
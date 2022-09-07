cmake_minimum_required(VERSION 3.00)
project(c_test C)

set(CMAKE_C_STANDARD 11)

add_executable(c_test main.c link_list.c link_list.h stack_array.c stack_array.h stack_array_test.c stack_array_test.h queue_array.c queue_array.h queue_array_test.c queue_array_test.h str.c str.h str_test.c str_test.h str_to_int.c str_to_int.h str_to_int_test.c str_to_int_test.h arrary_sort.c arrary_sort.h array_sort_test.c array_sort_test.h link_sort.c link_sort.h array_count.c array_count.h hash_table.c hash_table.h array_search.c array_search.h sort_bubble.c sort_bubble.h)

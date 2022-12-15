cmake_minimum_required(VERSION 3.24)
project(advent_of_code_2022 C)

set(CMAKE_C_STANDARD 11)

add_executable(advent_of_code_2022
        day_01/challenge_1.c day_01/linked_list.h day_01/linked_list.c day_01/file_handler.c day_01/file_handler.h day_01/error_handler.c day_01/error_handler.h day_02/main.c)

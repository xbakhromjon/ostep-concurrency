cmake_minimum_required(VERSION 3.28)
project(concurrency C)

set(CMAKE_C_STANDARD 11)

add_executable(concurrency main.c
        condition-variables/join-problem.c
        locks/main.c
        condition-variables/join-spin.c
        condition-variables/condition-variable.c)

#
cmake_minimum_required(VERSION 3.25)
project(
    lesson7
    VERSION 1.0
    DESCRIPTION "Fibonacci sequence"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED 17)

set(CMAKE_BUILD_TYPE Debug)

add_executable(lesson7)

set(sources
    main.cpp
)

target_sources(lesson7 PRIVATE ${sources})
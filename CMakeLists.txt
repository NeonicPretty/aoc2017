cmake_minimum_required(VERSION 3.9)
project(aoc2017)

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH ../bygg)

add_executable(aoc2017 main.cpp AllDays.hpp day1.cpp)
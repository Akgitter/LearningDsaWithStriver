cmake_minimum_required(VERSION 3.28)
project(StriverA2ZDSA)

set(CMAKE_CXX_STANDARD 20)

add_executable(Main main.cpp
        Backtrace2.cpp)
#add_executable(RECRSN Backtrace1.cpp)
add_executable(RECRSN Backtrace2.cpp
        Backtrace2.cpp)
add_executable(Pattern Stars.cpp)

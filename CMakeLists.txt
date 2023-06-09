cmake_minimum_required(VERSION 3.25)
project(MathXpert)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_library(MathXpert STATIC src/mathX_basic.cpp src/mathX_trigonometry.cpp include/mathX_trigonometry.hpp include/mathX_decimal_display.hpp)

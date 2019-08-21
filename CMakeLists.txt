cmake_minimum_required(VERSION 3.14)
project(xann)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)

# main app
add_executable(
    xann
    main.cpp
    neuron.cpp
    layer.cpp
    matrix.cpp
    ann.cpp
)
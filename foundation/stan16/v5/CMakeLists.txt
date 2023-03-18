CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "etc"
        LANGUAGES CXX
)

add_executable(valvect valvect.cpp)
add_executable(vslice vslice.cpp)
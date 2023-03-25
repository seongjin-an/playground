CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "FILE"
        LANGUAGES CXX
)

add_executable(fileio fileio.cpp)
add_executable(count count.cpp)
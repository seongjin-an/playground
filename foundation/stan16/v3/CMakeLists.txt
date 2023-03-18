CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "functor"
        LANGUAGES CXX
)

add_executable(functor functor.cpp)
add_executable(test test.cpp)
add_executable(funadap funadap.cpp)
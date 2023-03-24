CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "CIN"
        LANGUAGES CXX
)

add_executable(checkit check_it.cpp)
add_executable(cinexcp cinexcp.cpp)
add_executable(get_fun get_fun.cpp)
add_executable(peeker peeker.cpp)
add_executable(truncate truncate.cpp)
CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        ARRAYTP
        VERSION 0.1
        DESCRIPTION "TEMPLATE PARAMETER"
        LANGUAGES CXX
)

add_executable(program main.cpp)
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
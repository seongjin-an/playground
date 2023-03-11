CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "NESTED"
        LANGUAGES CXX
)

add_executable(nested nested.cpp)
target_include_directories(nested PUBLIC ${CMAKE_SOURCE_DIR}/includes)
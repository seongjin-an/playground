CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "ERROR_OBJECT"
        LANGUAGES CXX
)

add_executable(error4 error4.cpp)
target_include_directories(error4 PUBLIC ${CMAKE_SOURCE_DIR}/includes)
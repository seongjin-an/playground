cmake_minimum_required(VERSION 3.14)

project(
        STOCK
        VERSION 0.1
        DESCRIPTION "EXAMLE"
        LANGUAGES CXX
)

add_subdirectory(libs)
add_executable(program usestok2.cpp)
target_compile_options(program PUBLIC -Wall -Werror)
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_link_libraries(program stock)
CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        PROGRAM
        VERSION 0.1
        DESCRIPTION "MULTI INHERITANCE"
        LANGUAGES CXX
)

add_subdirectory(libs)
add_executable(program main.cpp)
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_link_libraries(program worker0)
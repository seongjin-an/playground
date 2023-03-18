CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "ITERATOR"
        LANGUAGES CXX
)

add_executable(copyit copyit.cpp)
add_executable(inserts inserts.cpp)
add_executable(list list.cpp)
add_executable(setops setops.cpp)
add_executable(multimap multimap.cpp)
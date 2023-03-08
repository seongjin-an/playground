CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "TEMPLATE FRIEND"
        LANGUAGES CXX
)
add_executable(frnd2tmp frnd2tmp.cpp)
add_executable(tmp2tmp tmp2tmp.cpp)
add_executable(manyfrnd manyfrnd.cpp)
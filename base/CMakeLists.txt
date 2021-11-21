cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 14)

add_executable(cout src/cout.cpp)
add_executable(cstrings src/cstrings.cpp)
add_executable(cin src/cin.cpp)
add_executable(getline src/getline.cpp)
add_executable(get src/get.cpp)
add_executable(structure src/structure.cpp)

add_executable(address src/pointer/address.cpp)
add_executable(pointer src/pointer/pointer.cpp)
add_executable(use_new src/pointer/use_new.cpp)
add_executable(arraynew src/pointer/arraynew.cpp)
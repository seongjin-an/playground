cmake_minimum_required(VERSION 3.22)
project(playground)

set(CMAKE_CXX_STANDARD 14)

add_executable(default_parameter 01_default_parameter.cpp)
add_executable(overloading 02_overloading.cpp)
add_executable(template1 03_template1.cpp)
add_executable(templateOverloading 04_templateOverloading.cpp)
add_executable(explicitSpecialization 05_explicitSpecialization.cpp)
add_executable(emplateArgument 06_tempalteArgument.cpp)
add_executable(metaprogramming 07_metaprogramming.cpp)
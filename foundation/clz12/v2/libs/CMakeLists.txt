add_library(String STATIC string1.cpp)
target_include_directories(String PUBLIC ${CMAKE_SOURCE_DIR}/includes)
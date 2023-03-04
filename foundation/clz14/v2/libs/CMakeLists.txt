add_library(studentc STATIC studenti.cpp)
target_include_directories(studentc PUBLIC ${CMAKE_SOURCE_DIR}/includes)
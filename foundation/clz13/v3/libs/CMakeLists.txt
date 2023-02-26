add_library(brass STATIC brass.cpp)
target_include_directories(brass PUBLIC ${CMAKE_SOURCE_DIR}/includes)
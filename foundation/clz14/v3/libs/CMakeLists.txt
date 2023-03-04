add_library(worker0 STATIC worker0.cpp)
target_include_directories(worker0 PUBLIC ${CMAKE_SOURCE_DIR}/includes)

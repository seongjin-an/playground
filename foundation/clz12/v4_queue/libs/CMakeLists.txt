add_library(queue STATIC queue.cpp)
target_include_directories(queue PUBLIC ${CMAKE_SOURCE_DIR}/includes)
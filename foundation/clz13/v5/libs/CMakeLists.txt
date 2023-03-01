add_library(dma STATIC dma.cpp)
target_include_directories(dma PUBLIC ${CMAKE_SOURCE_DIR}/includes)
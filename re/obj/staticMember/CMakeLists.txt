add_executable(static main.cpp)
add_library(staticLib libs/Static.cpp)
include_directories(includes)
target_link_libraries(static staticLib)
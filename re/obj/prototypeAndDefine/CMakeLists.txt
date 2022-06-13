add_executable(protoDefine protoDefine.cpp)
add_library(personLib libs/Person.cpp)
include_directories(includes)
target_link_libraries(protoDefine personLib)
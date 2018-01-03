project(AppImageLibExample)
cmake_minimum_required(VERSION 3.5)

find_package(AppImageKit REQUIRED)

add_executable(test1  main.cpp)
target_link_libraries(test1 ${APPIMAGEKIT_LIBRARIES})

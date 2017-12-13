project(AppImageLibExample)
cmake_minimum_required(VERSION 3.5)

find_package(AppImage REQUIRED)

include_directories(${APPIMAGE_INCLUDE_DIRS})

add_executable(test1  main.cpp)
target_link_libraries(test1 appimage)

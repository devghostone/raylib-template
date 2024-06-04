cmake_minimum_required(VERSION 3.20)
project(minecraft-clone)

add_subdirectory(lib/raylib)
include_directories(lib/raylib/src)
add_executable(minecraft-clone src/main.cpp)
target_link_libraries(minecraft-clone raylib)
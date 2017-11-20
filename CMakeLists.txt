cmake_minimum_required(VERSION 3.8)
project(JsonParser)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.h")

set(SOURCE_FILES main.cpp janson.h hashtable.h hashtable.cpp lookup3.h private.h config.h)
add_executable(JsonParser ${SOURCE_FILES})
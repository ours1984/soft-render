cmake_minimum_required(VERSION 3.0.0)

cmake_path(GET CMAKE_CURRENT_SOURCE_DIR FILENAME dirname)

project(${dirname} VERSION 0.1.0)

find_package(GLEW REQUIRED)

add_library(${dirname}
    include/softrender/glSoft.h 
    src/glSoft.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
set_target_properties(${dirname} PROPERTIES DEBUG_POSTFIX "_d")
set_target_properties(${dirname} PROPERTIES RELEASE_POSTFIX "_r")

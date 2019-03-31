cmake_minimum_required(VERSION 3.2)
project (searches)
# This is for old cmake versions
#set (CMAKE_CXX_STANDARD 11)
#--------------------------------
#=== SETTING VARIABLES ===#
# Compiling flags
set( GCC_COMPILE_FLAGS "-Wall" )
set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COMPILE_FLAGS} ${PREPROCESSING_FLAGS}" )
#Include dir
include_directories( include )
#=== Main App ===
#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp src/project.cpp)
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
add_executable(main ${SOURCES})
#define C++11 as the standard.
target_compile_features(main PUBLIC cxx_std_11)

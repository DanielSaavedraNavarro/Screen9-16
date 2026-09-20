cmake_minimum_required(VERSION 3.21)

project(Force9x16)

set(CMAKE_CXX_STANDARD 20)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "GEODE_SDK is not set")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_BINARY_DIR}/geode)

file(GLOB_RECURSE SOURCES src/*.cpp)

setup_geode_mod(${PROJECT_NAME})
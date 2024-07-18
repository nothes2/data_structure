cmake_minimum_required(VERSION 3.0)
project(data_structure)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/includes)
set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)

add_subdirectory(${SOURCE_DIR})
add_subdirectory(${TEST_DIR})
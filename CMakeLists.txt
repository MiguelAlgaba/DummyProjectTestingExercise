project(DummyProjectTesting)

cmake_minimum_required(VERSION 2.8)

include( CTest )

add_executable(fail fail.cpp)
add_test( NAME failingtest COMMAND ${CMAKE_BINARY_DIR}/fail )

add_executable(pass pass.cpp)
add_test( NAME passingtest COMMAND ${CMAKE_BINARY_DIR}/pass )

add_executable(error error.cpp)


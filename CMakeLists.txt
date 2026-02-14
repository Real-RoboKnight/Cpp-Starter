cmake_minimum_required(VERSION 3.23)

project(Learning LANGUAGES CXX VERSION 0.0.1)
option(CMAKE_EXPORT_COMPILE_COMMANDS "Create CompileCommands.json for clang tools" ON)
option(BUILD_TEST "Build the test executable" ON)
include(CMakeDependentOption)
cmake_dependent_option(RUN_TEST "Run tests on build. If set to OFF, tests can be run from ${CMAKE_BINARY_DIR}/Tests/tests" ON BUILD_TEST OFF)

add_subdirectory(MathLib)

if(BUILD_TEST)
    add_subdirectory(Tests)
endif()

find_package(Catch2 3 REQUIRED)
# These tests can use the Catch2-provided main
ENABLE_TESTING()

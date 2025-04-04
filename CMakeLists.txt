cmake_minimum_required(VERSION 3.10)

# Project name
project(CS2_Calculator VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
set(SOURCES
    calculator.cpp
    test.cpp
)

# Create executable from source files
add_executable(calculator_test ${SOURCES})

# Include directories
target_include_directories(calculator_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Add compiler warnings
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(calculator_test PRIVATE -Wall -Wextra)
elseif(MSVC)
    target_compile_options(calculator_test PRIVATE /W4)
endif()

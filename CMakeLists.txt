set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)

cmake_minimum_required(VERSION 3.16...3.27)
project(15Puzzle)


# Source files
file(GLOB SOURCES src/* )

# Create executable
add_executable(15Puzzle main.cpp ${SOURCES})

target_include_directories(15Puzzle
  PRIVATE
  include
)

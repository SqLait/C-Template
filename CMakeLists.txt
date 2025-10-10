cmake_minimum_required(VERSION 3.14)
# Change the project name to whatever your project is
project(Template C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


include(cmake/cflags.cmake)
include(cmake/pkg.cmake)

file(GLOB SOURCES "src/*.c" "impl/*.c")

# I always like to name my binary 'main'
add_executable(main ${SOURCES})
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/util ${CMAKE_CURRENT_SOURCE_DIR}/include/lib)

include(cmake/linker.cmake)

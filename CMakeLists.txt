cmake_minimum_required(VERSION 3.14)
# Change the project name to whatever your project is
project(Template C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SOURCES "src/*.c" "impl/*.c")

include(cmake/cflags.cmake)
include(cmake/pkg.cmake)

set(SOKOL_HEADERS
    include/lib/sokol_gfx.h
    include/lib/sokol_app.h)

# I always like to name my binary 'main'
add_executable(main ${SOURCES})
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/util ${CMAKE_CURRENT_SOURCE_DIR}/include/lib)
target_link_libraries(main PRIVATE
    -lX11
    -lXi
    -lXcursor
    -lGL
    -lasound
    -ldl
    -lm
)

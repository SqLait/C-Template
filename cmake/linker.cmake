# linker.cmake
# -------------------------------------------------
# Used to link libs to the main executable

target_link_libraries(main PRIVATE
    -lX11
    -lXi
    -lXcursor
    -lGL
    -lasound
    -ldl
    -lm
)

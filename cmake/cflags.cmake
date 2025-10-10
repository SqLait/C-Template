# cflags.cmake
# -------------------------------------------
# Used to set compiler flags.

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wstrict-prototypes \
    -Wall -Wno-sign-compare -Wpointer-arith -Wformat-security -Wswitch-enum \
    -Wunused-parameter -Wstrict-aliasing -Wbad-function-cast -Wcast-align \
    -Wstrict-prototypes -Wold-style-definition -Wmissing-field-initializers \
    -Wno-override-init"
)

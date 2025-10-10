# pkg.cmake
# ========================================
# pkg.cmake is used to install third party
# libs like SDL, Raylib, etl and more!
# ----------------------------------------
# Syntax:
# ----------------------------------------
# FetchContent_Declare(
#   lib_name
#   GIT_REPOSITORY https://github.com/dev/lib
#   GIT_TAG        <targetVersion>
# )
#
# FetchContent_MakeAvailable(lib_name)

Include(FetchContent)

# FetchContent_Declare(
#   etl
#   GIT_REPOSITORY https://github.com/ETLCPP/etl
#   GIT_TAG        <targetVersion>
# )
# 
# FetchContent_MakeAvailable(etl)

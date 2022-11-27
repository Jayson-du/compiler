cmake_minimum_required(VERSION 2.6)
project(Compiler)

if (PLATFORM STREQUAL "LINUX")
    add_definitions(-DLINUX)
elseif(PLATFORM STREQUAL "WINDOWS")
    add_definitions(-DWINDOWS)
endif(PLATFORM)

# file(GLOB_RECURSE _SourceFiles
#     "${PROJECT_SOURCE_DIR}/include/")

# file(GLOB_RECURSE _HeaderFiles
#     "${PROJECT_SOURCE_DIR}/source/")

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(Compiler compiler.c)
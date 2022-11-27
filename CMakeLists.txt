cmake_minimum_required(VERSION 2.6)
project(Compiler)

# 在WIndows下开启项目组织
option(USE_SOLUTION_FOLDERS  ON)


if (PLATFORM STREQUAL "LINUX")
    add_definitions(-DLINUX)
elseif(PLATFORM STREQUAL "WINDOWS")
    add_definitions(-DWINDOWS)
endif(PLATFORM)

include_directories("${PROJECT_SOURCE_DIR}/include")

# 在指定目录下遍历所有头文件, 将头文件加入到HeaderFiles中
file(GLOB_RECURSE HeaderFiles
    "include/*.h"
    "include/*.hpp"
)

# 对HeaderFiles中的文件按照原有的文件目录组织加入项目中
source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${HeaderFiles})


add_executable(Compiler compiler.c
                        ${HeaderFiles}  # 添加到项目中
              )
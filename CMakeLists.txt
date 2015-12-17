# CMake 最低版本号要求
cmake_minimum_required(VERSION 2.8.7)

# 项目信息
project (Demo C CXX)
# The version number.
set (Demo_VERSION_MAJOR 1)
set (Demo_VERSION_MINOR 0)

# 指定生成目标
#add_executable(demo main.cpp)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 指定生成目标
add_executable(demo ${DIR_SRCS})


# 加入一个配置头文件，用于处理 CMake 对源码的设置
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
  )
#message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
#message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_BINARY_DIR}")

# 是否使用自己的 MathFunctions 库
option (USE_MYMATH
       "Use provided math implementation" ON)

# 是否加入 MathFunctions 库
if (USE_MYMATH)
  include_directories ("${PROJECT_SOURCE_DIR}/Math")
  add_subdirectory (Math)
  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

# 添加链接库
target_link_libraries(demo MathFunctions)

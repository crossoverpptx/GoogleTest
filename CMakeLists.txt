cmake_minimum_required(VERSION 3.21)
project(GoogelTest)

# C++17编译标准
set(CMAKE_CXX_STANDARD 17)

# 添加头文件
include_directories(./include DIT_INC)

# 指定外部引用文件的搜索路径
link_directories(./lib)

# 需要编译的源文件
add_executable(gtest ./src/main.cpp)

# 链接外部库
target_link_libraries(gtest libgtest.a libgtest_main.a libgmock.a libgmock_main.a)
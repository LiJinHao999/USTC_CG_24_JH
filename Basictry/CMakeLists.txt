cmake_minimum_required(VERSION 3.15)

# set the project name
project(Tutorial)

# add the executable
add_executable(Tutorial tutorial.cpp)

# cmake_minimum_required 指定使用 CMake 的最低版本号，project 指定项目名称，add_executable 用来生成可执行文件，需要指定生成可执行文件的名称和相关源文件。

# 注意，此示例在 CMakeLists.txt 文件中使用小写命令。CMake 支持大写、小写和混合大小写命令。
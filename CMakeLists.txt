cmake_minimum_required(VERSION 3.22)
# 设置C++版本
set(CMAKE_CXX_STANDARD 17)

project(CppPrimer VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(CppPrimer main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

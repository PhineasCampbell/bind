cmake_minimum_required(VERSION 3.10)

project(Bind)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)







add_executable(bind bind.cpp)

project(bind VERSION 1.0)

target_include_directories(bind PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(bind PUBLIC ${PROJECT_BINARY_DIR}/poybind11)



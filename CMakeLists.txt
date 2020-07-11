cmake_minimum_required(VERSION 3.10)
project(UTAUDEVTOOL)

set(CMAKE_CXX_STANDARD 14)

include_directories(rapidjson/include/)

add_executable(UTAU main.cpp)


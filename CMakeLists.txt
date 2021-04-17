cmake_minimum_required(VERSION 3.19)
project(DES)

set(CMAKE_CXX_STANDARD 14)

add_executable(DES main.cpp Encryption.h function.cpp)
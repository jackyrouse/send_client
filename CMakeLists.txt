cmake_minimum_required(VERSION 3.10)
project(sendclient)

set(CMAKE_CXX_STANDARD 11)

AUX_SOURCE_DIRECTORY(third AllPart)

add_executable(sendclient main.cpp ${AllPart})
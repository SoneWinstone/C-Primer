cmake_minimum_required(VERSION 3.8)
project(SaleBook)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sales_item.h)
add_executable(SaleBook ${SOURCE_FILES})
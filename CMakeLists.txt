cmake_minimum_required(VERSION 3.0.0)
project(BasicApplication VERSION 0.1.0 LANGUAGES CXX)

add_definitions("-std=c++17")

enable_testing()

add_subdirectory(Application)
add_subdirectory(Tests)
cmake_minimum_required(VERSION 3.0.0)
project(BasicApplication VERSION 0.1.0 LANGUAGES CXX)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(Application)
add_subdirectory(Part1)
add_subdirectory(Part1Interfaces)
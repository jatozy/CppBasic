file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.hpp")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

include_directories(${CMAKE_SOURCE_DIR}/Application/Part1/src)

add_executable(Part1_UnitTests ${SOURCES} ${HEADERS})
add_test(NAME Part1 COMMAND Part1_UnitTests)

target_link_libraries(Part1_UnitTests 
    PRIVATE Part1
    PRIVATE Part1Interfaces
    PRIVATE CONAN_PKG::catch2)

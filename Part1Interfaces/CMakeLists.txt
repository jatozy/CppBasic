
file(GLOB HEADERS "src/*.hpp")

add_library(Part1Interfaces SHARED
    ${HEADERS}
)

target_include_directories(Part1Interfaces PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)

set_target_properties(Part1Interfaces PROPERTIES LINKER_LANGUAGE CXX)
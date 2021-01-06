
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "src/*.hpp")

add_library(Part1 SHARED
    ${SOURCES}
    ${HEADERS}
)

target_link_libraries(Part1 
    PUBLIC Part1Interfaces
)

target_include_directories(Part1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)
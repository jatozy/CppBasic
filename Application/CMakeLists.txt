set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(Executable)
add_subdirectory(Part1)
add_subdirectory(Part1Interfaces)
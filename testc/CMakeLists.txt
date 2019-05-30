
project ( TestC C)

include_directories(${CMAKE_SOURCE_DIR}/lib/src)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib)

add_executable(${PROJECT_NAME} testc.c )
target_link_libraries(${PROJECT_NAME} TestLib)

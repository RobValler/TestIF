set (CMAKE_CXX_STANDARD 14)
project ( TestCPP )

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/lib/src)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib)

add_executable(${PROJECT_NAME} testcpp.cpp )
target_link_libraries(${PROJECT_NAME} TestLib)

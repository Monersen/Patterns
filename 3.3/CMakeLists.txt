cmake_minimum_required(VERSION 3.1)
project(3.3 VERSION 1.0)

set(SRC 3.3.cpp logMessage.cpp)
include_directories(includes)

add_executable(3.3 ${SRC})
add_subdirectory(handlers)

target_link_libraries(3.3 PUBLIC handlers)
target_include_directories(3.3 PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/handlers/includes")
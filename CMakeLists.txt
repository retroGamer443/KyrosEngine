cmake_minimum_required(VERSION 3.10)

project(KyrosEngine)
# file(GLOB_RECURSE SRC_FILES "${PROJECT_SOURCE_DIR}/Sandbox/*.cpp")

add_subdirectory(KyrosEngine)
include_directories(${PROJECT_SOURCE_DIR}/KyrosEngine)

add_executable(Sandbox ${PROJECT_SOURCE_DIR}/Sandbox/Test.cpp)
target_link_libraries(Sandbox PUBLIC KyrosEngine)
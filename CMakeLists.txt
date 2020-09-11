cmake_minimum_required(VERSION 3.10)

project(KyrosEngine)
file(GLOB_RECURSE SRC_FILES "${PROJECT_SOURCE_DIR}/Sandbox/*.cpp")

add_subdirectory(KyrosEngine)

add_executable(Sandbox ${SRC_FILES})
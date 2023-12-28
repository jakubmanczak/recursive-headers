cmake_minimum_required(VERSION 3.20)
project(recursive_headers)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_SOURCE_DIR}/src
)
file(GLOB main_sources
  "${PROJECT_SOURCE_DIR}/include/*.h"
  "${PROJECT_SOURCE_DIR}/src/*.c"
)
add_executable(${PROJECT_NAME} ${main_sources})
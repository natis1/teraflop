cmake_minimum_required (VERSION 3.0)
cmake_policy(VERSION 3.0)

set(PROJECT_NAME teraflop)

file(GLOB SOURCE_FILES
  "${CMAKE_SOURCE_DIR}/src/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/*.hpp")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

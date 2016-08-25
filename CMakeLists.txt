cmake_minimum_required (VERSION 3.0)
cmake_policy(VERSION 3.0)

set(PROJECT_NAME teraflop)

file(GLOB SOURCE_FILES
  "${CMAKE_SOURCE_DIR}/src/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/*.hpp"
  "${CMAKE_SOURCE_DIR}/src/*.c"
  "${CMAKE_SOURCE_DIR}/src/*.h")

set (CURSES_NEED_NCURSES true)

find_package(Curses)

message(STATUS "${CURSES_INCLUDE_PATH} included ${CURSES_LIBRARY}")

include_directories(${CURSES_INCLUDE_PATH})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${CURSES_LIBRARY})

cmake_minimum_required(VERSION 3.5)
project(lab_2 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_SOURCES
    src/main.cpp
    src/oneTask.cpp
    src/twoTask.cpp
    src/threeTask.cpp
    include/oneTask.h
    include/twoTask.h
    include/threeTask.h
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(lab_2 ${EXECUTABLE_SOURCES})
install(TARGETS lab_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

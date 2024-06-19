cmake_minimum_required(VERSION 3.5)
project(lab_1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_SOURCES
    src/main.cpp
    src/myDescription.cpp
    src/myFormatDescription.cpp
    src/speedCalc.cpp
    include/myDescription.h
    include/myFormatDescription.h
    include/speedCalc.h
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(lab_1 ${EXECUTABLE_SOURCES})
install(TARGETS lab_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

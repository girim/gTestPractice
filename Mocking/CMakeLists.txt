cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS}  "-I /usr/local/lib/boost_1_61_0 -std=c++1z -Wall")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(GTEST)

link_directories(/usr/lib)

set(SOURCES
   MockingExample.cpp)

add_executable(GTestExample ${SOURCES})
target_link_libraries(GTestExample gtest)
target_link_libraries(GTestExample gtest_main)
target_link_libraries(GTestExample gmock)
target_link_libraries(GTestExample pthread)


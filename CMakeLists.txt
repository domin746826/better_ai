cmake_minimum_required(VERSION 3.13)
project(better_ai)
set(CMAKE_CXX_STANDARD 23)


set(SOURCE_FILES main.cpp Thought/Thought.cpp Knowledge/Knowledge.cpp)

add_executable(better_ai ${SOURCE_FILES})

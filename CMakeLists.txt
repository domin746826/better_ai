cmake_minimum_required(VERSION 3.13)
project(better_ai)
set(CMAKE_CXX_STANDARD 23)


set(SOURCE_FILES main.cpp Thought/Thought.cpp Knowledge/Knowledge.cpp Memory/Memory.cpp)

add_executable(better_ai ${SOURCE_FILES})

include(FetchContent)

FetchContent_Declare(
  yaml-cpp
  GIT_REPOSITORY https://github.com/jbeder/yaml-cpp.git
  GIT_TAG 0.8.0 # Can be a tag (yaml-cpp-x.x.x), a commit hash, or a branch name (master)
)
FetchContent_MakeAvailable(yaml-cpp)

target_link_libraries(better_ai PUBLIC yaml-cpp::yaml-cpp) # The library or executable that require yaml-cpp library
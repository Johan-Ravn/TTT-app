cmake_minimum_required(VERSION 3.20)
project(TTT)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(TTT src/controller/main.cpp)

add_library(board src/controller/board.cpp)
add_library(rules src/controller/rules.cpp)

target_link_libraries(TTT
    board
    rules
)


# How to use
# 1. Build dir: cmake -B /tmp/build
# 2. Build: cmake --build /tmp/build
# 3. Go to dir: cd /tmp/build
# 4. Run executable: ./<executable> === ./TTT

# Easier use
# 1. cd build
# 2. cmake --build .
# 3. ./<executable> === ./TTT

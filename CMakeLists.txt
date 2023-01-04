cmake_minimum_required(VERSION 3.16)
project(t3)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

set(SOURCE_FILES ../src/main.cpp)

set(LIB_FILES

    # ../include/ai.h
    # ../include/gameState.h
    # ../include/move.h
    # ../include/player.h
    ../include/square.h
    ../include/board.h

    # ../src/ai.cpp
    # ../src/gameState.cpp
    # ../src/move.cpp
    # ../src/player.cpp
    ../src/square.cpp
    ../src/board.cpp
)

add_library(t3_lib ${LIB_FILES})

add_executable(t3 ${SOURCE_FILES} ${LIB_FILES})

# TESTS
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    board_test
    ../test/board_test.cpp
)
target_link_libraries(
    board_test
    GTest::gtest_main
    t3_lib
)

include(GoogleTest)

gtest_discover_tests(board_test)
cmake_minimum_required(VERSION 3.14)
project(Trip-Planer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(plan_lib
        source/plan.cpp)
target_include_directories(plan_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.5.2
)
FetchContent_MakeAvailable(Catch2)

add_executable(tests
        tests/tests.cpp)
target_link_libraries(tests PRIVATE plan_lib Catch2::Catch2WithMain)

add_executable(trip_planer main.cpp)
target_link_libraries(trip_planer PRIVATE plan_lib)

enable_testing()
add_test(NAME tests COMMAND tests)
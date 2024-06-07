cmake_minimum_required(VERSION 3.26)

project(design_pattern VERSION 1.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")


add_executable(main main.cpp)

target_include_directories(main PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

target_link_libraries(main ${PROJECT_NAME})

include("${CMAKE_SOURCE_DIR}/cmake/Helper.cmake")

internal_add_subdirectorys(modules)

enable_testing()

add_executable(strategy_test strategy_test.cpp)

add_test(NAME strategy_test COMMAND strategy_test)

target_link_libraries(strategy_test ${PROJECT_NAME})

add_executable(observer_test observer_test.cpp)

add_test(NAME observer_test COMMAND observer_test)

target_link_libraries(observer_test ${PROJECT_NAME})


add_executable(decorator_test decorator_test.cpp)

add_test(NAME decorator_test COMMAND decorator_test)

target_link_libraries(decorator_test ${PROJECT_NAME})

include(CTest)
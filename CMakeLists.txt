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

add_executable(factory_test factory_test.cpp)
add_test(NAME factory_test COMMAND factory_test)
target_link_libraries(factory_test ${PROJECT_NAME})

add_executable(command_test command_test.cpp)
add_test(NAME command_test COMMAND command_test)
target_link_libraries(command_test ${PROJECT_NAME})

add_executable(adapter_test adapter_test.cpp)
add_test(NAME adapter_test COMMAND adapter_test)
target_link_libraries(adapter_test ${PROJECT_NAME})

add_executable(template_test template_test.cpp)
add_test(NAME template_test COMMAND template_test)
target_link_libraries(template_test ${PROJECT_NAME})

add_executable(iterator_test iterator_test.cpp)
add_test(NAME iterator_test COMMAND iterator_test)
target_link_libraries(iterator_test ${PROJECT_NAME})

add_executable(composite_test composite_test.cpp)
add_test(NAME composite_test COMMAND composite_test)
target_link_libraries(composite_test ${PROJECT_NAME})

include(CTest)
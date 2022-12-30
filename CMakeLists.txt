cmake_minimum_required(VERSION 3.17)
project(example)

set(CMAKE_CXX_STANDARD 14)

# Dependency ##################################################################################
# GTest
ADD_SUBDIRECTORY(googletest)

# spdlog
add_subdirectory(spdlog)



# Executable ##################################################################################
# Define test executable
add_executable(
        google-test-run

        # add cpp files
        tests/test_case.cpp)

target_link_libraries(
        google-test-run
        PRIVATE

        gtest
        gtest_main)




# Header files ################################################################################
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")




# src
add_executable(example src/main.cpp)



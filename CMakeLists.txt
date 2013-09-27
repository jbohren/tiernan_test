cmake_minimum_required(VERSION 2.8.3)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
add_executable(tiernan_test tiernan_test.cpp)


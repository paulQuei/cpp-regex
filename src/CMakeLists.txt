cmake_minimum_required(VERSION 3.8)
project(cpp-date-time)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

add_executable(01_match                01_match.cpp)
add_executable(02_search               02_search.cpp)
add_executable(03_replace              03_replace.cpp)
add_executable(04_raw_literal          04_raw_literal.cpp)
add_executable(05_char_class           05_char_class.cpp)
add_executable(06_repeat               06_repeat.cpp)
add_executable(07_iterator             07_iterator.cpp)
add_executable(08_icase                08_icase.cpp)
add_executable(09_sub_match            09_sub_match.cpp)
add_executable(10_greedy               10_greedy.cpp)
add_executable(11_anchor			   11_anchor.cpp)
add_executable(12_lookaround           12_lookaround.cpp)

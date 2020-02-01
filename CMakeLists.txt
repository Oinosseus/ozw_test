cmake_minimum_required(VERSION 3.10)

add_executable (ozw_test main.cpp)
target_link_libraries(ozw_test pthread openzwave)
# target_include_directories(ozw_test PUBLIC /usr/local/include/openzwave/)

cmake_minimum_required(VERSION 3.5)

project(buyer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(buyer main.cpp buyer.cpp buyer.h)

install(TARGETS buyer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

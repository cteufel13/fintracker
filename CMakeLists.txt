cmake_minimum_required(VERSION 3.16)

project(FinTracker VERSION 0.1 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add your source file
include_directories(include src src/gui)

add_executable(fintracker src/main.cpp
                src/gui/notif.cpp)
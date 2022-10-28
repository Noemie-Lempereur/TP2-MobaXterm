cmake_minimum_required(VERSION 3.10)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(untitled1 main.cpp Window.cpp WindowTest.cpp ButtonsPanel.cpp)
target_link_libraries(untitled1 Qt5::Widgets)

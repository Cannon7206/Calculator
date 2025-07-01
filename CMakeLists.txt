cmake_minimum_required(VERSION 3.31)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Calculator main.cpp
        MainWindow.cpp
        MainWindow.h
        gui.h
)
target_link_libraries(Calculator
        Qt::Core
        Qt::Gui
        Qt::Widgets
)


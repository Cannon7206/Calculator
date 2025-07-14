cmake_minimum_required(VERSION 3.31)
project(Calculator)

set(CMAKE_PREFIX_PATH "C:/Qt/6.9.1/mingw_64/lib/cmake")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Svg
        REQUIRED)

add_executable(Calculator main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ChrisMath.h
        ChrisMath.cpp
        funct.h
        funct.cpp
        ChrisMath.cpp
)
target_link_libraries(Calculator
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Svg
)


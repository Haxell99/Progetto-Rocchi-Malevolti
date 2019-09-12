cmake_minimum_required(VERSION 3.13)
project(Dragon_s_Lair)

set(CMAKE_CXX_STANDARD 11)

find_package(wxWidgets REQUIRED net gl core base)
include(${wxWidgets_USE_FILE})

add_executable(Dragon_s_Lair MainApp.cpp MainApp.h MainFrame.cpp MainFrame.h TitlePanel.cpp TitlePanel.h CharSelPanel.cpp CharSelPanel.h)
target_link_libraries(Dragon_s_Lair ${wxWidgets_LIBRARIES})
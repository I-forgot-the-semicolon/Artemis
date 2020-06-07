cmake_minimum_required(VERSION 3.16)
project(Art_dev)

set(CMAKE_CXX_STANDARD 20)

add_executable(Art_dev WIN32 main.cpp Engine/Windows.h Engine/Window/Window.cpp Engine/Window/Window.h Engine/Window/WindowClass.cpp Engine/Window/WindowClass.h Engine/ErrorHandlers/ErrorHandler.cpp Engine/ErrorHandlers/ErrorHandler.h Engine/Input/Kbd.cpp Engine/Input/Kbd.h Engine/Input/Mouse.cpp Engine/Input/Mouse.h Engine/Input/KeyList.h Engine/Input/Input.cpp Engine/Input/Input.h)
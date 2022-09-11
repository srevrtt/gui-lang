cmake_minimum_required(VERSION 3.23)

project(GuiLang VERSION 0.1)
set(PROJECT_DESCRIPTION A special purpose programming language designed for desktop app development)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(INTERPRETER_SRCS src/guilang/util.cpp src/guilang/scanner.cpp)
set(SRCS ${INTERPRETER_SRCS} src/main.cpp)

add_executable(GuiLang ${SRCS})

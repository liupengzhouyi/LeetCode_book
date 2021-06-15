cmake_minimum_required(VERSION 3.19)
project(LeetCode_book)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCode_book main.cpp model/createFile/CreateFile.cpp model/createFile/CreateFile.h model/createMarkdown/readFile/ReadFile.cpp model/createMarkdown/readFile/ReadFile.h ex/20210614/256/code.cpp allEnv.h)
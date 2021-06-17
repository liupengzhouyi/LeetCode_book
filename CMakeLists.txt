cmake_minimum_required(VERSION 3.19)
project(LeetCode_book)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCode_book main.cpp model/createFile/CreateFile.cpp model/createFile/CreateFile.h model/createMarkdown/readFile/ReadFile.cpp model/createMarkdown/readFile/ReadFile.h allEnv.h model/selectDir/SelectDir.cpp model/selectDir/SelectDir.h model/createMarkdown/createMarkdown/CreateMarkdown.cpp model/createMarkdown/createMarkdown/CreateMarkdown.h)
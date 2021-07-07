cmake_minimum_required(VERSION 3.19)
project(LeetCode_book)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCode_book
        main.cpp
        model/createFile/CreateFile.cpp
        model/createFile/CreateFile.h
        model/createMarkdown/readFile/ReadFile.cpp
        model/createMarkdown/readFile/ReadFile.h
        allEnv.h
        model/selectDir/SelectDir.cpp
        model/selectDir/SelectDir.h
        model/createMarkdown/createMarkdown/CreateMarkdown.cpp
        model/createMarkdown/createMarkdown/CreateMarkdown.h
        model/createCppCode/CreateCppCode.cpp
        model/createCppCode/CreateCppCode.h
        design-patterns/factoryModel/Log/Log.cpp
        design-patterns/factoryModel/Log/Log.h
        design-patterns/factoryModel/RunLog/RunLog.cpp
        design-patterns/factoryModel/RunLog/RunLog.h
        design-patterns/factoryModel/PrintLog/PrintLog.cpp
        design-patterns/factoryModel/PrintLog/PrintLog.h
        design-patterns/factoryModel/factoryModelIndex.h
        design-patterns/factoryModel/factoryModelIndex.cpp
        design-patterns/adapterMode/showLog/ShowLog.cpp
        design-patterns/adapterMode/showLog/ShowLog.h
        design-patterns/adapterMode/showLogForDev/ShowLogForDev.cpp
        design-patterns/adapterMode/showLogForDev/ShowLogForDev.h
        design-patterns/adapterMode/showLogForTest/ShowLogForTest.cpp
        design-patterns/adapterMode/showLogForTest/ShowLogForTest.h)


#include_directories(design-patterns/factoryModel/factoryModelIndex.h)
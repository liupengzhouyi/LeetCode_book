//
// Created by 刘鹏 on 2021/6/16.
//
#include <iostream>
#include <string>

// 是否打印日志
const int LOGKEYTAG = 1;

inline void printLog(const std::string &logInfo) {
    std::cout << logInfo << std::endl;
}
//
// Created by 刘鹏 on 2021/6/16.
//
#include <iostream>
#include <string>
#include <fstream>

// 是否打印日志
const int LOGKEYTAG = 1;

const int WRIETLOGTAG = 1;

const int SHOWLOGTAG = 2;

const std::string LOGPATH = "../log/log.txt";

inline void printLog(const std::string &logInfo) {
    if (LOGKEYTAG == 1) {
        if (SHOWLOGTAG == 1) {
            std::cout << logInfo << std::endl;
        }
    }
    if (WRIETLOGTAG == 1) {
        // 基于当前系统的当前日期/时间
        time_t now = time(0);
        tm *ltm = localtime(&now);
        std::string year = std::to_string(1900 + ltm->tm_year);
        std::string month = std::to_string(1 + ltm->tm_mon);
        if (month.length() == 1) month = "0" + month;
        std::string day = std::to_string(ltm->tm_mday);
        if (day.length() == 1) day = "0" + day;
        std::string hour = std::to_string(ltm->tm_hour);
        if (hour.length() == 1) hour = "0" + hour;
        std::string min = std::to_string(ltm->tm_min);
        if (min.length() == 1) min = "0" + min;
        std::string sec = std::to_string(ltm->tm_sec);
        if (sec.length() == 1) sec = "0" + sec;
        std::string dateTime = year + "-" + month + "-" + day + " " + hour + ":" + month + ":" + sec;
        std::string log = dateTime + " | " + logInfo;
        std::fstream outfile;
        outfile.open(LOGPATH, std::ios::app);
        if (outfile.is_open()) {
            outfile << log + "\n";
            outfile.close();
        }
    }
}
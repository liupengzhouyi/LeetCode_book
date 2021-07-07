//
// Created by 刘鹏 on 2021/7/5.
//

#include "Log.h"

Log::Log() {
    this->createTime();
}

Log::~Log() {

}

const std::string &Log::getLogInfo() const {
    return logInfo;
}

void Log::setLogInfo(const std::string &logInfo) {
    Log::logInfo = logInfo;
}

const std::string &Log::getTimeStr() const {
    return timeStr;
}

void Log::setTimeStr(const std::string &timeStr) {
    Log::timeStr = timeStr;
}

time_t Log::getTime() const {
    return time;
}

void Log::setTime(time_t time) {
    Log::time = time;
}

const std::string &Log::getLogType() const {
    return logType;
}

void Log::setLogType(const std::string &logType) {
    Log::logType = logType;
}

const std::string &Log::getReturnLogInfo() const {
    return returnLogInfo;
}

void Log::setReturnLogInfo(const std::string &returnLogInfo) {
    this->returnLogInfo = returnLogInfo;
}

void Log::setNewTime() {
    this->time = std::time(nullptr);
    this->createTime();
}

void Log::createTime() {
    this->time = std::time(nullptr);
    std::string strDateTime = "";
    tm *localtimeTemp = localtime(&time);
    strDateTime = strDateTime + std::to_string(1900 + localtimeTemp->tm_year) + "-";
    strDateTime = strDateTime + std::to_string(1 + localtimeTemp->tm_mon) + "-";
    strDateTime = strDateTime + std::to_string(localtimeTemp->tm_mday) + " ";
    strDateTime = strDateTime + std::to_string(localtimeTemp->tm_hour) + ":";
    strDateTime = strDateTime + std::to_string(localtimeTemp->tm_min) + ":";
    strDateTime = strDateTime + std::to_string(localtimeTemp->tm_sec);
    this->setTimeStr(strDateTime);
}

void Log::createReturnLogInfo() {
    this->returnLogInfo = this->getLogType() + " >>> " + this->getTimeStr() + "|->" + this->getLogInfo();
}






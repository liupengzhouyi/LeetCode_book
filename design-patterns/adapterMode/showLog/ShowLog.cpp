//
// Created by 刘鹏 on 2021/7/7.
//

#include "ShowLog.h"

ShowLog::ShowLog() {}

ShowLog::~ShowLog() {

}

const Log &ShowLog::getLog() const {
    return log;
}

void ShowLog::setLog(const Log &log) {
    ShowLog::log = log;
}

const std::string &ShowLog::getReturnLogInfo() const {
    return returnLogInfo;
}

void ShowLog::setReturnLogInfo(const std::string &returnLogInfo) {
    ShowLog::returnLogInfo = returnLogInfo;
}

std::string ShowLog::createReturnLogInfo() {
    return std::string();
}



//
// Created by 刘鹏 on 2021/7/7.
//

#include "ShowLogForDev.h"

std::string ShowLogForDev::createReturnLogInfo() {
    if (this->getLog().getLogType() == "运行日志") {
        this->setReturnLogInfo(this->getLog().getReturnLogInfo());
    } else {
        this->setReturnLogInfo(this->getLog().getReturnLogInfo());
    }
    return this->getReturnLogInfo();
}

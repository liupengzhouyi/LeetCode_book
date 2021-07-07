//
// Created by 刘鹏 on 2021/7/7.
//

#include "ShowLogForTest.h"

std::string ShowLogForTest::createReturnLogInfo() {
    if (this->getLog().getLogType() == "测试日志") {
        this->setReturnLogInfo(this->getLog().getReturnLogInfo());
    } else {
        this->setReturnLogInfo(this->getLog().getReturnLogInfo());
    }
    return this->getReturnLogInfo();
}

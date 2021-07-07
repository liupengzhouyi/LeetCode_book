//
// Created by 刘鹏 on 2021/7/7.
//

#include "ShowLogForDev.h"

std::string ShowLogForDev::createReturnLogInfo() {
    this->setReturnLogInfo("returnLogForDev");
    return ShowLog::createReturnLogInfo();
}

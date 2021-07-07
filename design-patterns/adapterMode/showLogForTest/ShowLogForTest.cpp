//
// Created by 刘鹏 on 2021/7/7.
//

#include "ShowLogForTest.h"

std::string ShowLogForTest::createReturnLogInfo() {
    this->setReturnLogInfo("ReturnLogforTest");
    return ShowLog::createReturnLogInfo();
}

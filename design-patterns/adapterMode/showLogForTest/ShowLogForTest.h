//
// Created by 刘鹏 on 2021/7/7.
//

#ifndef LEETCODE_BOOK_SHOWLOGFORTEST_H
#define LEETCODE_BOOK_SHOWLOGFORTEST_H


#include "../showLog/ShowLog.h"

class ShowLogForTest : public ShowLog{

public:
    std::string createReturnLogInfo() override;
};


#endif //LEETCODE_BOOK_SHOWLOGFORTEST_H

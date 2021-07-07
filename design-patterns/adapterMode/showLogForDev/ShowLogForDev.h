//
// Created by 刘鹏 on 2021/7/7.
//

#ifndef LEETCODE_BOOK_SHOWLOGFORDEV_H
#define LEETCODE_BOOK_SHOWLOGFORDEV_H


#include "../showLog/ShowLog.h"

class ShowLogForDev : public ShowLog{

public:
    std::string createReturnLogInfo() override;
};


#endif //LEETCODE_BOOK_SHOWLOGFORDEV_H

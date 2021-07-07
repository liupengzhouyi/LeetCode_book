//
// Created by 刘鹏 on 2021/7/7.
//

#ifndef LEETCODE_BOOK_SHOWLOG_H
#define LEETCODE_BOOK_SHOWLOG_H


#include "../../factoryModel/Log/Log.h"

class ShowLog {
private:
    Log log;

    std::string returnLogInfo;

public:

    ShowLog();

    ShowLog(const Log &log);

    virtual ~ShowLog();

    virtual std::string createReturnLogInfo();

    const Log &getLog() const;

    void setLog(const Log &log);

    const std::string &getReturnLogInfo() const;

    void setReturnLogInfo(const std::string &returnLogInfo);
};


#endif //LEETCODE_BOOK_SHOWLOG_H

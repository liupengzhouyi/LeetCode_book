//
// Created by 刘鹏 on 2021/7/5.
//

#ifndef LEETCODE_BOOK_LOG_H
#define LEETCODE_BOOK_LOG_H

#include <iostream>
#include <string>
#include <ctime>

class Log {

private:
    std::string logInfo;

    std::string timeStr;

    std::time_t time;

    std::string logType;

    std::string returnLogInfo;
public:

    Log();

    virtual ~Log();

    const std::string &getLogInfo() const;

    void setLogInfo(const std::string &logInfo);

    const std::string &getTimeStr() const;

    void setTimeStr(const std::string &timeStr);

    time_t getTime() const;

    void setTime(time_t time);

    const std::string &getLogType() const;

    const std::string &getReturnLogInfo() const;

    void setReturnLogInfo(const std::string &returnLogInfo);

    void setLogType(const std::string &logType);

    void setNewTime();

    void createTime();

    void createReturnLogInfo();
};


#endif //LEETCODE_BOOK_LOG_H

//
// Created by 刘鹏 on 2021/6/14.
//

#ifndef LEETCODE_BOOK_CREATEFILE_H
#define LEETCODE_BOOK_CREATEFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include "../../allEnv.h"

class CreateFile {

private:
    std::string path;

    std::string name;

public:
    CreateFile();

    CreateFile(const std::string &path, const std::string &name);

    int createPath();

    int createFile();

    const std::string &getPath() const;

    void setPath(const std::string &path);

    const std::string &getName() const;

    void setName(const std::string &name);

    void log(const std::string &logInfo) {
        if (LOGKEYTAG == 1){
            printLog(logInfo);
        }
    }
};


#endif //LEETCODE_BOOK_CREATEFILE_H

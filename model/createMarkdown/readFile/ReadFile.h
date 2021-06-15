//
// Created by 刘鹏 on 2021/6/14.
//

#ifndef LEETCODE_BOOK_READFILE_H
#define LEETCODE_BOOK_READFILE_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class ReadFile {


private:

    std::string path;

    std::vector<std::string> info;

public:

    ReadFile();

    ReadFile(const std::string &path);

    virtual ~ReadFile();

    const std::string &getPath() const;

    void setPath(const std::string &path);

    const std::vector<std::string> &getInfo() const;

    void setInfo(const std::vector<std::string> &info);

    void readFileInfo();

    void showFileInfo();
};


#endif //LEETCODE_BOOK_READFILE_H

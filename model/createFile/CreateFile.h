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

    std::string dirName;

    std::string fileName;

public:
    CreateFile();

    CreateFile(const std::string &path, const std::string &name);

    void init();

    int createPath();

    int createFile();

    int createOneFile(const std::string &path);

    void createFileByName(const std::string &name);

    void createThreeFile();

    const std::string &getPath() const;

    void setPath(const std::string &path);

    const std::string &getDirName() const;

    void setDirName(const std::string &dirName);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    void log(const std::string &logInfo);
};


#endif //LEETCODE_BOOK_CREATEFILE_H

//
// Created by 刘鹏 on 2021/6/14.
//


#include "ReadFile.h"
#include "../../../allEnv.h"

ReadFile::ReadFile() {}

ReadFile::ReadFile(const std::string &path) : path(path) {}

ReadFile::~ReadFile() {

}

const std::string &ReadFile::getPath() const {
    return path;
}

void ReadFile::setPath(const std::string &path) {
    ReadFile::path = path;
}

const std::vector<std::string> &ReadFile::getPathSet() const {
    return pathSet;
}

void ReadFile::setPathSet(const std::vector<std::string> &pathSet) {
    ReadFile::pathSet = pathSet;
}

const std::vector<std::string> &ReadFile::getInfo() const {
    return info;
}

void ReadFile::setInfo(const std::vector<std::string> &info) {
    ReadFile::info = info;
}

void ReadFile::readFileInfo(const std::string &path) {
    std::string tempPath = path;
    sayLog("｜ 打开 ｜ 文件 ｜ " + tempPath + " ｜");
    std::ifstream in;
    in.open(tempPath, std::ios::in);
    if (!in.is_open()) {
        sayLog("｜ 打开 ｜ 文件 ｜ " + tempPath + " ｜ 失败 ｜");
        std::cout << "Error opening file"; exit (1);
    } else {
        sayLog("｜ 打开 ｜ 文件 ｜ " + tempPath + " ｜ 成功 ｜");
        sayLog("｜ 读取 ｜ 文件 ｜ " + tempPath + " ｜ 内容 ｜ 开始 ｜");
        std::string line;
        while(getline(in, line))
        {
            this->info.push_back(line);
        }
        sayLog("｜ 读取 ｜ 文件 ｜ " + tempPath + " ｜ 内容 ｜ 完毕 ｜");
        in.close();
        sayLog("｜ 关闭 ｜ 文件 ｜ " + tempPath + " ｜");
    }
}

void ReadFile::showFileInfo() {
    for (auto line : this->info) {
        std::cout << line << std::endl;
    }
}

void ReadFile::sayLog(const std::string &logInfo) {
    if (LOGKEYTAG == 1) {
        printLog(logInfo);
    }
}

int ReadFile::createFilePath() {
    std::string titleNum = "";
    for (auto ch : this->path) {
        if (ch == '/') {
            titleNum = "";
        } else {
            titleNum = titleNum + ch;
        }
    }
    int count = 0;
    std::string titlePath = this->path + "/" + titleNum + "Title.md";
    this->sayLog("| 找到｜ 题目 ｜ 文件｜ 路径 | " + titlePath + "｜");
    this->pathSet.push_back(titlePath);
    this->info.push_back("# 题目\n");
    this->readFileInfo(titlePath);
    count = count + 1;
    std::string mindPath = this->path + "/" + titleNum + "Mind.md";
    this->sayLog("| 找到｜ 解题 ｜ 文件 ｜ 路径 | " + mindPath + "｜");
    this->pathSet.push_back(mindPath);
    this->info.push_back("# 解题思路\n");
    this->readFileInfo(mindPath);
    count = count + 1;
    std::string codePath = this->path + "/" + titleNum + "Code.cpp";
    this->sayLog("| 找到｜ 代码 ｜ 文件 ｜ 路径 | " + codePath + "｜");
    this->pathSet.push_back(codePath);
    this->info.push_back("# 参考代码（By：liupeng）\n");
    this->info.push_back("```cpp\n");
    this->readFileInfo(mindPath);
    this->info.push_back("```");
    count = count + 1;
    return count;
}


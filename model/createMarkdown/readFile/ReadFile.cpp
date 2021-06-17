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

void ReadFile::readFileInfo() {
    for (auto tempPath : this->getPathSet()) {
        sayLog("open:" + tempPath);
        std::ifstream in;
        in.open(tempPath, std::ios::in);
        if (!in.is_open()) {
            std::cout << "Error opening file"; exit (1);
        } else {
            std::string line;
            while(getline(in, line))
            {
                this->info.push_back(line);
            }
            in.close();
        }
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
    this->pathSet.push_back(titlePath);
    count = count + 1;
    std::string mindPath = this->path + "/" + titleNum + "Mind.md";
    this->pathSet.push_back(mindPath);
    count = count + 1;
    std::string codePath = this->path + "/" + titleNum + "Code.cpp";
    this->pathSet.push_back(codePath);
    count = count + 1;
    return count;
}


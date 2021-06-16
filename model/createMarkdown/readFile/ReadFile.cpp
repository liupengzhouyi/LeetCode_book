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

const std::vector<std::string> &ReadFile::getInfo() const {
    return info;
}

void ReadFile::setInfo(const std::vector<std::string> &info) {
    ReadFile::info = info;
}

void ReadFile::readFileInfo() {

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

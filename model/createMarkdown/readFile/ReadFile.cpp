//
// Created by 刘鹏 on 2021/6/14.
//


#include "ReadFile.h"

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
    std::ifstream in(this->getPath());
    if (! in.is_open()) {
        std::cout << "Error opening file"; exit (1);
    }
    std::string line;
    while(getline(in, line))
    {
        this->info.push_back(line);
    }
}

void ReadFile::showFileInfo() {

    for (auto line : this->info) {
        std::cout << line << std::endl;
    }

}

//
// Created by 刘鹏 on 2021/6/16.
//

#include "SelectDir.h"

SelectDir::SelectDir() {
    this->pathSet = std::vector<std::string>();
}

SelectDir::SelectDir(const std::string &path) : path(path) {
    this->pathSet = std::vector<std::string>();
}

auto SelectDir::findDir() -> int {
    int count = 0;
    std::string tempPath = "";
    this->pathSet.push_back(tempPath);
    return count;
}

const std::string &SelectDir::getPath() const {
    return path;
}

void SelectDir::setPath(const std::string &path) {
    SelectDir::path = path;
}

const std::vector<std::string> &SelectDir::getPathSet() const {
    return pathSet;
}

void SelectDir::setPathSet(const std::vector<std::string> &pathSet) {
    SelectDir::pathSet = pathSet;
}

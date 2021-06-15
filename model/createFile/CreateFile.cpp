//
// Created by 刘鹏 on 2021/6/14.
//


#include "CreateFile.h"

CreateFile::CreateFile() {}

CreateFile::CreateFile(const std::string &path, const std::string &name) : path(path), name(name) {}

int CreateFile::createPath() {
    this->log("开始组合路径...");
    std::string newPath = "../" + this->getPath();
    this->log("组合路径完成：" + newPath);
    this->log("开始创建新路径...");
    this->log("正在创建指令...");
    std::string command;
    command = "mkdir -p " + newPath;
    this->log("创建指令完成！");
    this->log("正在执行指令...");
    system(command.c_str());
    this->log("执行指令完成");
    return 0;
}

int CreateFile::createFile() {
    this->createPath();
    this->log("开始组合路径...");
    std::string newPath = "../" + this->getPath() + "/" + this->getName();
    this->log("组合路径完成：" + newPath);
    this->log("开始创建文件...");
    std::ofstream outfile;
    outfile.open(newPath, std::ios::app);
    if (outfile.is_open()) {
        this->log("创建文件成功！");
        outfile.close();
        return 1;
    } else {
        this->log("创建文件失败！");
    }
    return 0;
}

const std::string &CreateFile::getPath() const {
    return path;
}

void CreateFile::setPath(const std::string &path) {
    CreateFile::path = path;
}

const std::string &CreateFile::getName() const {
    return name;
}

void CreateFile::setName(const std::string &name) {
    CreateFile::name = name;
}



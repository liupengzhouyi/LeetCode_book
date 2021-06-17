//
// Created by 刘鹏 on 2021/6/14.
//


#include "CreateFile.h"

CreateFile::CreateFile() {
    this->init();
}

CreateFile::CreateFile(const std::string &path, const std::string &name) : path(path), dirName(name) {
    this->init();
}

void CreateFile::init() {
    this->createPath();
}

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
    this->log("开始组合路径...");
    std::string newPath = "../" + this->getPath() + "/" + this->getFileName();
    this->log("组合路径完成：" + newPath);
    this->log("开始创建文件...");
    this->createOneFile(newPath);
    return 0;
}

int CreateFile::createOneFile(const std::string &path) {
    std::ofstream outfile;
    outfile.open(path, std::ios::app);
    if (outfile.is_open()) {
        this->log("创建文件:" + path + "成功！");
        outfile.close();
        return 1;
    } else {
        this->log("创建文件:" + path + "失败！");
    }
    return 0;
}

void CreateFile::createFileByName(const std::string &name) {
    this->setFileName(name);
    this->createFile();
    return;
}

void CreateFile::createThreeFile() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::string year = std::to_string(1900 + ltm->tm_year);
    std::string month = std::to_string(1900 + ltm->tm_year);
    if (month.length() == 1) month = "0" + month;
    std::string day = std::to_string(ltm->tm_mday);
    if (day.length() == 1) day = "0" + day;
    std::string date = year + month + day;
    std::string tempPath = "ex/" + date + "/" + this->dirName;
    this->setPath(tempPath);
    this->createPath();
    std::string codeName = this->getDirName() + "Code.cpp";
    this->log("准备创建" + codeName);
    this->createFileByName(codeName);

    std::string titleName = this->getDirName() + "Title.md";
    this->log("准备创建" + titleName);
    this->createFileByName(titleName);

    std::string mindName = this->getDirName() + "Mind.md";
    this->log("准备创建" + titleName);
    this->createFileByName(mindName);
}

const std::string &CreateFile::getPath() const {
    return path;
}

void CreateFile::setPath(const std::string &path) {
    CreateFile::path = path;
}

const std::string &CreateFile::getDirName() const {
    return dirName;
}

void CreateFile::setDirName(const std::string &dirName) {
    CreateFile::dirName = dirName;
}

const std::string &CreateFile::getFileName() const {
    return fileName;
}

void CreateFile::setFileName(const std::string &fileName) {
    CreateFile::fileName = fileName;
}

void CreateFile::log(const std::string &logInfo) {
    if (LOGKEYTAG == 1){
        printLog(logInfo);
    }
}





//
// Created by 刘鹏 on 2021/6/16.
//

#include "SelectDir.h"
#include "../../allEnv.h"

SelectDir::SelectDir() {
    this->pathSet = std::vector<std::string>();
}

SelectDir::SelectDir(const std::string &path) : path(path) {
    this->pathSet = std::vector<std::string>();
}

int SelectDir::findDir() {
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

void SelectDir::selectDir() {
    DIR * dir;
    struct dirent * ptr;
    std::string path = "../ex";
    this->sayLog("open dir " + path + ":");
    dir = opendir((char *)path.c_str());
    while((ptr = readdir(dir)) != NULL) //循环读取目录数据
    {
        if(strcmp(ptr->d_name,".")==0 || strcmp(ptr->d_name,"..")==0)    ///current dir OR parrent dir
            continue;
        else if(ptr->d_type == 4) {
            std::string newPath = path + "/" + std::string(ptr->d_name);
            this->sayLog("find dir " + newPath + "");
            this->addPathSet(newPath);
        }
    }
    closedir(dir);//关闭目录指针
    this->sayLog("clear dir over!");
}

int SelectDir::addPathSet(const std::string &tempPath) {
    int count = 0;
    DIR * dir1;
    struct dirent * ptr1;
    this->sayLog("open dir --- " + tempPath + ":");
    dir1 = opendir((char *)tempPath.c_str());
    while((ptr1 = readdir(dir1)) != NULL) //循环读取目录数据
    {
        if(strcmp(ptr1->d_name,".")==0 || strcmp(ptr1->d_name,"..")==0)    ///current dir OR parrent dir
            continue;
        else if(ptr1->d_type == 4) {
            std::string newPath = tempPath + "/" + std::string(ptr1->d_name);
            this->sayLog("find dir " + newPath + "");
            this->pathSet.push_back(newPath);
            count = count + 1;
        }
    }
    closedir(dir1);//关闭目录指针
    this->sayLog("clear dir over!");
    return count;
}

void SelectDir::sayLog(const std::string &logInfo) {
    if (LOGKEYTAG == 1) {
        printLog(logInfo);
    }
}

#include <iostream>
#include "model/createMarkdown/readFile/ReadFile.h"
#include "model/createFile/CreateFile.h"
#include "model/createMarkdown/createMarkdown/CreateMarkdown.h"
#include "model/selectDir/SelectDir.h"
#include "model/createCppCode/CreateCppCode.h"
#include "design-patterns/factoryModel/Log/Log.h"
#include "design-patterns/factoryModel/RunLog/RunLog.h"
#include "design-patterns/factoryModel/PrintLog/PrintLog.h"
//#include "design-patterns/factoryModel/factoryModelIndex.h"
//#include "design-patterns/factoryModel/factoryModelIndex.cpp"

void show() {
    std::cout << "做题 -> 1" << std::endl;
    std::cout << "出书 -> 2" << std::endl;
    std::cout << "帮助 -> 3" << std::endl;
    std::cout << "退出 -> 0" << std::endl;
}

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> returnList = std::vector<std::vector<int>>();
    if(numRows == 0) return returnList;
    else {
        std::vector<int> l = {1};
        returnList.push_back(l);
        if(numRows == 1) return returnList;
        else if (numRows == 2) {
            returnList.push_back({1, 1});
        }
        else {
            for (int i = 1; i < numRows; i++) {
                std::vector<int> temp = {1};
                std::vector<int> newLine = returnList[i];
                for (int j = 1; j < newLine.size(); j++) {
                    temp.push_back(newLine[j] + newLine[j - 1]);
                }
                temp.push_back(1);
                returnList.push_back(temp);
                return returnList;
            }
        }
    }
}

void factoryModelIndex11() {
    Log *runLog = new RunLog();
    Log *printLog = new PrintLog();
    runLog->setLogType("运行日志");
    printLog->setLogType("打印日志");
    runLog->setLogInfo("正在运行");
    runLog->createReturnLogInfo();
    std::cout << runLog->getReturnLogInfo() << std::endl;
    printLog->setLogInfo("正在打印1");
    printLog->createReturnLogInfo();
    std::cout << printLog->getReturnLogInfo() << std::endl;
    printLog->setLogInfo("正在打印2");
    printLog->createReturnLogInfo();
    std::cout << printLog->getReturnLogInfo() << std::endl;
    printLog->setLogInfo("正在打印3");
    printLog->createReturnLogInfo();
    printLog->setLogType("测试日志");
    std::cout << printLog->getReturnLogInfo() << std::endl;
    printLog->setLogInfo("正在打印4");
    printLog->createReturnLogInfo();
    std::cout << printLog->getReturnLogInfo() << std::endl;
    printLog->setLogInfo("正在打印5");
    printLog->createReturnLogInfo();
    std::cout << printLog->getReturnLogInfo() << std::endl;
    printLog->setLogInfo("正在打印6");
    printLog->createReturnLogInfo();
    std::cout << printLog->getReturnLogInfo() << std::endl;
    delete runLog;
    delete printLog;
}

int main() {

    factoryModelIndex11();


    int n;
    show();
    while(std::cin >> n) {
        if (n == 0) {
            break;
        } else if (n == 1) {
            std::cout << "请输入题号" << std::endl;
            std::string num;
            std::cin >> num;
            std::string name = num;
            CreateFile createFile = CreateFile();
            createFile.setDirName(name);
            createFile.createThreeFile();
        } else if(n == 2) {
            SelectDir selectDir = SelectDir();
            selectDir.selectDir();
            for (auto item : selectDir.getPathSet()) {
                std::cout << item << std::endl;
                ReadFile readFile = ReadFile();
                readFile.setPath(item);
                readFile.createFilePath();
                CreateMarkdown createMarkdown = CreateMarkdown(item, readFile.getInfo());
            }
        } else if (n == 3) {
            show();
        } else {
            break;
        }
    }
}

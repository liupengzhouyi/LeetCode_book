#include <iostream>
#include "model/createMarkdown/readFile/ReadFile.h"
#include "model/createFile/CreateFile.h"
#include "model/createMarkdown/createMarkdown/CreateMarkdown.h"
#include "model/selectDir/SelectDir.h"
#include "model/createCppCode/CreateCppCode.h"

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
            }
            return returnList;
        }
    }

}


int main() {




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

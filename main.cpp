#include <iostream>
#include "model/createMarkdown/readFile/ReadFile.h"
#include "model/createFile/CreateFile.h"
#include "model/createMarkdown/createMarkdown/CreateMarkdown.h"
#include "model/selectDir/SelectDir.h"

void show() {
    std::cout << "做题 -> 1" << std::endl;
    std::cout << "出书 -> 2" << std::endl;
    std::cout << "帮助 -> 3" << std::endl;
    std::cout << "退出 -> 0" << std::endl;
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

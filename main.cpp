#include <iostream>
#include "model/createMarkdown/readFile/ReadFile.h"
#include "model/createFile/CreateFile.h"
#include "model/createMarkdown/createMarkdown/CreateMarkdown.h"
#include "model/selectDir/SelectDir.h"

/*int main() {

    std::string name = "234";
    CreateFile createFile;
    createFile.setPath("ex/20210616/234");

    std::string codeName = name + "Code.cpp";
    createFile.setName(codeName);
    createFile.createFile();

    std::string titleName = name + "Title.md";
    createFile.setName(titleName);
    createFile.createFile();

    std::string mindName = name + "Mind.md";
    createFile.setName(mindName);
    createFile.createFile();

    std::cout << "Hello, World!" << std::endl;

    ReadFile readFile;

    readFile.setPath("../model/createFile/CreateFile.h");
    readFile.readFileInfo();
    readFile.showFileInfo();

    std::vector<std::string> paths = {"../ex/20210614/256/title.md", "../ex/20210614/256/yourMind.md", "../ex/20210614/256/code.cpp"};

    for (auto str: paths) {
        readFile.setPath(str);
        readFile.readFileInfo();
        readFile.showFileInfo();
    }

    return 0;
}*/

int main() {

    std::string path;
    std::cin >> path;
    std::cout << path;
    ReadFile readFile = ReadFile();
    readFile.setPath("../ex/20210616/234");
    readFile.createFilePath();
    readFile.readFileInfo();
    for (std::string info : readFile.getInfo()) {
        std::cout << info << std::endl;
    }

//    SelectDir selectDir = SelectDir();
//    selectDir.selectDir();
//    for (auto item : selectDir.getPathSet()) {
//        std::cout << item << std::endl;
//    }
//    std::vector<std::string> l = {"abcdef", "123456"};
//    CreateMarkdown createMarkdown = CreateMarkdown("ex", l);

}

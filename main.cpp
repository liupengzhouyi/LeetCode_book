#include <iostream>
#include "model/createMarkdown/readFile/ReadFile.h"
#include "model/createFile/CreateFile.h"

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
    double b = 100000000.0;
    for (int i=0;i<365/2;i++) {
        b = b * 1.2;
        b = b * 0.8;
    }
    std::cout << b << std::endl;
    return 0;
}

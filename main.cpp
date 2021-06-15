#include <iostream>
#include "model/createMarkdown/readFile/ReadFile.h"

int main() {
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
}

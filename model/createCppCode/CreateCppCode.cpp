//
// Created by 刘鹏 on 2021/6/24.
//

#include "CreateCppCode.h"

CreateCppCode::CreateCppCode() {}

CreateCppCode::CreateCppCode(const std::string &subjectNum) : SubjectNum(subjectNum) {}

CreateCppCode::~CreateCppCode() {

}

const std::vector<std::string> &CreateCppCode::getCode() const {
    return code;
}

void CreateCppCode::setCode(const std::vector<std::string> &code) {
    CreateCppCode::code = code;
}
const std::string &CreateCppCode::getClassName() const {
    return className;
}

void CreateCppCode::setClassName(const std::string &className) {
    CreateCppCode::className = className;
}

const std::string &CreateCppCode::getSubjectNum() const {
    return SubjectNum;
}

void CreateCppCode::setSubjectNum(const std::string &subjectNum) {
    SubjectNum = subjectNum;
}

const std::string &CreateCppCode::getAuthor() const {
    return author;
}

void CreateCppCode::setAuthor(const std::string &author) {
    CreateCppCode::author = author;
}


void CreateCppCode::addCode(const std::string &codeLine) {
    this->code.push_back(codeLine);
}

void CreateCppCode::createClassName() {
    this->setClassName("Solution" + this->getSubjectNum());
}

void CreateCppCode::createClassInfo() {
    this->createClassName();
    std::vector<std::string> codeInfo = std::vector<std::string>();
    this->setCode(codeInfo);
    this->addCode("//");
    this->addCode("// Created by " + this->getAuthor() + " on 2021/6/24.");
    this->addCode("//");
    this->addCode("#include <iostream>");
    this->addCode("#include <string>");
    this->addCode("#include <vector>");
    this->addCode("#include <algorithm>");
    this->addCode("#include <set>");
    this->addCode("#include <map>");
    this->addCode("#include <math>");

    this->addCode("class Solution" + this->getClassName() +" {");
    this->addCode("    public:");
    this->addCode("    void showInfo() {");
    this->addCode("        std::cout << \"Holle World!\" << std::endl;");
    this->addCode("    }");
    this->addCode("};");
}

void CreateCppCode::showCppCodeInfo() {
    for (auto item : this->getCode()) {
        std::cout << item << std::endl;
    }
}







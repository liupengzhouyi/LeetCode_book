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
    this->addCode("#include <time.h>");
    this->addCode("class Solution" + this->getClassName() +" {");
    this->addCode("    public:");
    this->addCode("");
    this->addCode("    void showInfo() {");
    this->addCode("        std::cout << \"Holle World!\" << std::endl;");
    this->addCode("    }");
    this->addCode("");
    this->addCode("    void print(std::string strInfo) {");
    this->addCode("        time_t now = time(0);");
    this->addCode("        tm *ltm = localtime(&now);");
    this->addCode("        std::string year = std::to_string(1900 + ltm->tm_year);");
    this->addCode("        std::string month = std::to_string(1 + ltm->tm_mon);");
    this->addCode("        if (month.length() == 1) month = \"0\" + month;");
    this->addCode("        std::string day = std::to_string(ltm->tm_mday);");
    this->addCode("        if (day.length() == 1) day = \"0\" + day;");
    this->addCode("        std::string hour = std::to_string(ltm->tm_hour);");
    this->addCode("        if (hour.length() == 1) hour = \"0\" + hour;");
    this->addCode("        std::string min = std::to_string(ltm->tm_min);");
    this->addCode("        if (min.length() == 1) min = \"0\" + min;");
    this->addCode("        std::string sec = std::to_string(ltm->tm_sec);");
    this->addCode("        if (sec.length() == 1) sec = \"0\" + sec;");
    this->addCode("        std::string dateTime = year + \"-\" + month + \"-\" + day + \" \" + hour + \":\" + month + \":\" + sec;");
    this->addCode("        std::cout << dateTime + \" | \" + strInfo << std:endl;");
    this->addCode("    }");
    this->addCode("");
    this->addCode("");
    this->addCode("};");
}




void CreateCppCode::showCppCodeInfo() {
    for (auto item : this->getCode()) {
        std::cout << item << std::endl;
    }
}







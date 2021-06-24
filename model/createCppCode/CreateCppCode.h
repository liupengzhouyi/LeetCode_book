//
// Created by 刘鹏 on 2021/6/24.
//
#ifndef LEETCODE_BOOK_CREATECPPCODE_H
#define LEETCODE_BOOK_CREATECPPCODE_H

#include <iostream>
#include <string>
#include <vector>

class CreateCppCode {

private:
    std::vector<std::string> code;

    std::string className;

    std::string SubjectNum;

    std::string author;
public:

    CreateCppCode();

    CreateCppCode(const std::string &subjectNum);

    virtual ~CreateCppCode();

    const std::vector<std::string> &getCode() const;

    void setCode(const std::vector<std::string> &code);

    const std::string &getClassName() const;

    void setClassName(const std::string &className);

    const std::string &getSubjectNum() const;

    const std::string &getAuthor() const;

    void setAuthor(const std::string &author);

    void setSubjectNum(const std::string &subjectNum);

    void addCode(const std::string &codeLine);

    void createClassName();

    void createClassInfo();

    void showCppCodeInfo();
};


#endif //LEETCODE_BOOK_CREATECPPCODE_H

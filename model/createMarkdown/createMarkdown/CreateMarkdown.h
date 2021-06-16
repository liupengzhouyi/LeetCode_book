//
// Created by 刘鹏 on 2021/6/16.
//

#ifndef LEETCODE_BOOK_CREATEMARKDOWN_H
#define LEETCODE_BOOK_CREATEMARKDOWN_H


#include <string>
#include <vector>

class CreateMarkdown {

private:

    std::string markdownPath;

    std::vector<std::string> markdownInfo;

public:

    CreateMarkdown();

    CreateMarkdown(const std::string &markdownPath);

    CreateMarkdown(const std::string &markdownPath, const std::vector<std::string> &markdownInfo);

    const std::string &getMarkdownPath() const;

    void setMarkdownPath(const std::string &markdownPath);

    const std::vector<std::string> &getMarkdownInfo() const;

    void setMarkdownInfo(const std::vector<std::string> &markdownInfo);

    void log(const std::string &logInfo);
};


#endif //LEETCODE_BOOK_CREATEMARKDOWN_H

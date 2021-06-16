//
// Created by 刘鹏 on 2021/6/16.
//

#include "CreateMarkdown.h"

CreateMarkdown::CreateMarkdown() {}

CreateMarkdown::CreateMarkdown(const std::string &markdownPath) : markdownPath(markdownPath) {}

CreateMarkdown::CreateMarkdown(const std::string &markdownPath, const std::vector<std::string> &markdownInfo)
        : markdownPath(markdownPath), markdownInfo(markdownInfo) {}

const std::string &CreateMarkdown::getMarkdownPath() const {
    return markdownPath;
}

void CreateMarkdown::setMarkdownPath(const std::string &markdownPath) {
    CreateMarkdown::markdownPath = markdownPath;
}

const std::vector<std::string> &CreateMarkdown::getMarkdownInfo() const {
    return markdownInfo;
}

void CreateMarkdown::setMarkdownInfo(const std::vector<std::string> &markdownInfo) {
    CreateMarkdown::markdownInfo = markdownInfo;
}

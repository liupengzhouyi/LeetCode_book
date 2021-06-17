//
// Created by 刘鹏 on 2021/6/16.
//

#include <fstream>
#include "CreateMarkdown.h"
#include "../../../allEnv.h"

CreateMarkdown::CreateMarkdown() {}

CreateMarkdown::CreateMarkdown(const std::string &markdownPath) : markdownPath(markdownPath) {}

CreateMarkdown::CreateMarkdown(const std::string &markdownPath, const std::vector<std::string> &markdownInfo)
        : markdownPath(markdownPath), markdownInfo(markdownInfo) {
    std::string filePath = this->getMarkdownPath() + "/" + "markdown.md";
    this->log("| 创建 | 路径 | " + filePath + " |");
    std::fstream outfile;
    outfile.open(filePath, std::ios::out);
    this->log("| 打开 | 文件 | " + filePath + " |");
    if (outfile.is_open()) {
        this->log("| 创建 | 文件 | " + filePath + " | 成功 |");
        this->log("| 写入 | 文件 | " + filePath + " | 开始 |");
        for (auto line : this->getMarkdownInfo()) {
            outfile << line + "\n";
        }
        this->log("| 写入 | 文件 | " + filePath + " | 完成 |");
        outfile.close();
        this->log("| 关闭 | 文件 | " + filePath + " |");
    } else {
        this->log("| 打开 | 文件 | " + filePath + " | 失败 |");
    }
}

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

void CreateMarkdown::log(const std::string &logInfo) {
    if (LOGKEYTAG == 1) {
        printLog(logInfo);
    }
}

CreateMarkdown::~CreateMarkdown() {

}

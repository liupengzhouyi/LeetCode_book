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
    this->log("开始组合路径...");
    std::string newPath = "../" + this->getMarkdownPath();
    this->log("组合路径完成：" + newPath);
    this->log("开始创建新路径...");
    this->log("正在创建指令...");
    std::string command;
    command = "mkdir -p " + newPath;
    this->log("创建指令完成！");
    this->log("正在执行指令...");
    system(command.c_str());
    this->log("执行指令完成");
    this->log("开始组合文件路径...");
    std::string filePath = "../" + this->getMarkdownPath() + "/" + "markdown.md";
    this->log("组合文件路径完成：" + filePath);
    this->log("正在打开文件...");
    std::fstream outfile;
    outfile.open(filePath, std::ios::app);
    if (outfile.is_open()) {
        this->log("创建文件成功！");
        this->log("开始写入文件...");
        for (auto line : this->getMarkdownInfo()) {
            outfile << line + "\n";
        }
        this->log("文件写入完成！");
        outfile.close();
        this->log("关闭文件！");
    } else {
        this->log("创建文件失败！");
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

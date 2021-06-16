//
// Created by 刘鹏 on 2021/6/16.
//

#ifndef LEETCODE_BOOK_SELECTDIR_H
#define LEETCODE_BOOK_SELECTDIR_H


#include <vector>
#include <string>

class SelectDir {

private:
    std::string path;
    std::vector<std::string> pathSet;

public:

    SelectDir();

    SelectDir(const std::string &path);

    auto findDir() -> int;

    const std::string &getPath() const;

    void setPath(const std::string &path);

    const std::vector<std::string> &getPathSet() const;

    void setPathSet(const std::vector<std::string> &pathSet);
};


#endif //LEETCODE_BOOK_SELECTDIR_H

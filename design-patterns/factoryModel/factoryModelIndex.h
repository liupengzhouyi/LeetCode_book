//
// Created by 刘鹏 on 2021/7/5.
//

#ifndef LEETCODE_BOOK_FACTORYMODELINDEX_H
#define LEETCODE_BOOK_FACTORYMODELINDEX_H


#include <iostream>
#include <string>
#include "../factoryModel/Log/Log.h"

void factoryModelIndex() {
    Log * log = new Log();
    std::string time = log->getTimeStr();
    std::cout << time << std::endl;
}


#endif //LEETCODE_BOOK_FACTORYMODELINDEX_H
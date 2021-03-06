//
// Created by  on 2021/6/24.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <math>
#include <time.h>
class SolutionSolution316Code.cpp {
    public:

    void showInfo() {
        std::cout << "Holle World!" << std::endl;
    }

    void print(std::string strInfo) {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        std::string year = std::to_string(1900 + ltm->tm_year);
        std::string month = std::to_string(1 + ltm->tm_mon);
        if (month.length() == 1) month = "0" + month;
        std::string day = std::to_string(ltm->tm_mday);
        if (day.length() == 1) day = "0" + day;
        std::string hour = std::to_string(ltm->tm_hour);
        if (hour.length() == 1) hour = "0" + hour;
        std::string min = std::to_string(ltm->tm_min);
        if (min.length() == 1) min = "0" + min;
        std::string sec = std::to_string(ltm->tm_sec);
        if (sec.length() == 1) sec = "0" + sec;
        std::string dateTime = year + "-" + month + "-" + day + " " + hour + ":" + month + ":" + sec;
        std::cout << dateTime + " | " + strInfo << std:endl;
    }

    std::string removeDuplicateLetters(std::string s) {
        std::vector<char> myVector = std::vector<char>();
        int index = 0;
        for (auto c : s) {
            if (myVector.size() == 0) {
                myVector.puch_back(c);
            } else {
                bool has = false;
                for (int i = index; i < myVector.size();i++) {
                    auto item  = myVector[i];
                    if (item == c) {
                        has = true;
                        break;
                    }
                }
                if (has == false) {
                    myVector.puch_back(c);
                } else {
                    if (myVector[index] == c) {
                        if ((index + 1) >= myVector.size()) {
                            if (myVector[index] > myVector[index + 1]) {
                                index = index + 1;
                                myVector.puch_back(c);
                            }
                        }
                    }
                }
            }
        }
        std::string returnStr;
        for (auto item : myVector) {
            returnStr = returnStr + item;
        }
        return returnStr;
    }

};

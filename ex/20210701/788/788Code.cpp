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
class SolutionSolution788Code.cpp {
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

    int rotatedDigits(int n) {
        int count = 0;
        for (int i=0;i<n;i++) {
            std::string num = std::to_string(i);
            bool isGood = true;
            for (auto item : num) {
                if (item == '3' || item == '4' || item == '7') {
                    isGood = false;
                    break;
                }
            }
            if (isGood == false) {
                continue;
            } else {
                isGood = false;
                for (auto item : num) {
                    if (item == '2' || item == '5' || item == '6' || item == '9') {
                        isGood = true;
                        break;
                    }
                }
            }
            if (isGood == true) {
                count = count + 1;
            }
        }
        return count;
    }

};

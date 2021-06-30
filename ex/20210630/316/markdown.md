# 题目


给你一个字符串 s ，请你去除字符串中重复的字母，使得每个字母只出现一次。需保证 返回结果的字典序最小（要求不能打乱其他字符的相对位置）。

注意：该题与 1081 https:leetcode-cn.com/problems/smallest-subsequence-of-distinct
-characters 相同



### 示例 1：


```cpp
输入：s = "bcabc"
输出："abc"
```


### 示例 2：


```cpp
输入：s = "cbacdcbc"
输出："acdb"
```



### 提示：


* 1 <= s.length <= 104
* s 由小写英文字母组成

 Related Topics 栈 贪心 字符串 单调栈
# 解题思路

## 单调栈

# 参考代码（By：liupeng）

```cpp

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
```

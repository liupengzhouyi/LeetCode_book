# 题目

## 斐波那契数

通常用 F(n) 表示，形成的序列称为 斐波那契数列 。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：

F(0) = 0，F(1) = 1
F(n) = F(n - 1) + F(n - 2)，其中 n > 1
给你 n ，请计算 F(n) 。

 

### 示例 1：

```nashorn js
输入：2
输出：1
解释：F(2) = F(1) + F(0) = 1 + 0 = 1
```
### 示例 2：

```nashorn js
输入：3
输出：2
解释：F(3) = F(2) + F(1) = 1 + 1 = 2
```
### 示例 3：

```cpp
输入：4
输出：3
解释：F(4) = F(3) + F(2) = 2 + 1 = 3
```
# 解题思路

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
class SolutionSolution509Code.cpp {
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

    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        else {
            return fib(n - 1) + fib(n - 2);
        }
    }

};
```

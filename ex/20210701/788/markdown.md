# 题目

## 旋转数字

我们称一个数 X 为好数, 如果它的每位数字逐个地被旋转 180 度后，我们仍可以得到一个有效的，且和 X 不同的数。要求每位数字都要被旋转。

 如果一个数的每位数字被旋转以后仍然还是一个数字， 则这个数是有效的。0, 1, 和 8 被旋转后仍然是它们自己；2 和 5 可以互相旋转成对方（在这种情况
下，它们以不同的方向旋转，换句话说，2 和 5 互为镜像）；6 和 9 同理，除了这些以外其他的数字旋转以后都不再是有效的数字。

 现在我们有一个正整数 N, 计算从 1 到 N 中有多少个数 X 是好数？



### 示例：

```cpp
输入: 10
输出: 4
解释:
在[1, 10]中有四个好数： 2, 5, 6, 9。
注意 1 和 10 不是好数, 因为他们在旋转之后不变。
```




### 提示：


* N 的取值范围是 [1, 10000]。

* Related Topics 数学 动态规划
# 解题思路

## 妈的！垃圾水题！
* 查看元素
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
```

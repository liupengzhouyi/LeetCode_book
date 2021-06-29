# 题目


## 1790. 仅执行一次字符串交换能否使两个字符串相等


给你长度相等的两个字符串 s1 和 s2 。一次 字符串交换 操作的步骤如下：选出某个字符串中的两个下标（不必不同），并交换这两个下标所对应的字符。

如果对 其中一个字符串 执行 最多一次字符串交换 就可以使两个字符串相等，返回 true ；否则，返回 false 。



### 示例 1：

```cpp
输入：s1 = "bank", s2 = "kanb"
输出：true
解释：例如，交换 s2 中的第一个和最后一个字符可以得到 "bank"
```

### 示例 2：

```cpp
输入：s1 = "attack", s2 = "defend"
输出：false
解释：一次字符串交换无法使两个字符串相等
```


### 示例 3：

```cpp
输入：s1 = "kelb", s2 = "kelb"
输出：true
解释：两个字符串已经相等，所以不需要进行字符串交换
```

### 示例 4：

```cpp
输入：s1 = "abcd", s2 = "dcba"
输出：false
```


### 提示：

* 1 <= s1.length, s2.length <= 100
* s1.length == s2.length
* s1 和 s2 仅由小写英文字母组成
# 解题思路

## 水题

* 能不能找错位1
    * 2个或者没有
    * 组合起来一样
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
class SolutionSolution1790Code.cpp {
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

    bool areAlmostEqual(std::string s1, std::string s2) {
        std::string m1 = "", m2 = "";
        if (s1.length() != s2.length()) return false;
        else {
            for (int i = 0; i < s1.length(); i++) {
                if (s1[i] != s2[i]) {
                    m1 = m1 + s1[i];
                    m2 = m2 + s2[i];
                }
            }
            if (m1.length() != m2.length()) {
                return false;
            } else {
                if (m1.length() == 0) return true;
                if (m1.length() == 2) {
                    if (m1[0] == m2[1] && m1[1] == m2[0]) {
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
    }

};
```

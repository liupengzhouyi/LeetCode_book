# 题目

## 118.杨辉三角

给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
在杨辉三角中，每个数是它左上方和右上方的数的和。

 示例:

 输入: 5
输出:
```cpp
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
```
 Related Topics 数组
 👍 510 👎 0
# 解题思路

## 妈的！水题！

# 参考代码（By：liupeng）

```cpp

class Solution118 {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> returnList = std::vector<std::vector<int>>();
        if(numRows == 0) {
            return returnList;
        }
        else {
            if(numRows == 1) {
                returnList.push_back({1});
            }
            else if (numRows == 2) {
                returnList.push_back({1});
                returnList.push_back({1, 1});
            }
            else {
                returnList.push_back({1});
                returnList.push_back({1, 1});
                for (int i = 2; i < numRows; i++) {
                    std::vector<int> temp = {1};
                    std::vector<int> newLine = returnList[i-1];
                    for (int j = 1; j < newLine.size(); j++) {
                        temp.push_back(newLine[j] + newLine[j - 1]);
                    }
                    temp.push_back(1);
                    returnList.push_back(temp);
                }
            }
        }
        return returnList;
    }
};
```

# 题目

## 图像反转

给定一个二进制矩阵 A，我们想先水平翻转图像，然后反转图像并返回结果。

水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 [1, 1, 0] 的结果是 [0, 1, 1]。

反转图片的意思是图片中的 0 全部被 1 替换， 1 全部被 0 替换。例如，反转 [0, 1, 1] 的结果是 [1, 0, 0]。



### 示例 1：


```cpp
输入：[[1,1,0],[1,0,1],[0,0,0]]
输出：[[1,0,0],[0,1,0],[1,1,1]]
解释：首先翻转每一行: [[0,1,1],[1,0,1],[0,0,0]]；
     然后反转图片: [[1,0,0],[0,1,0],[1,1,1]]
```


### 示例 2：


```cpp
输入：[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
输出：[[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
解释：首先翻转每一行: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]]；
     然后反转图片: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
```




### 提示：


```cpp
 1 <= A.length = A[0].length <= 20
 0 <= A[i][j] <= 1
```

 Related Topics 数组
 
👍 257 👎 0
# 解题思路

## 没什么想法水题

* 用空间换时间
# 参考代码（By：liupeng）

```cpp

#include <iostream
#include <vector>


class Solution832 {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        std::vector<std::vector<int>> returnImage = std::vector<std::vector<int>>();
        for (auto item : image) {
            std::vector<int> temp = std::vector<int>();
            for (auto ex : item) {
                int value = (ex == 1) ? 0 : 1;
                temp.insert(temp.begin(), value);
            }
            returnImage.push_back(temp);
        }
        return returnImage;
    }
};
```

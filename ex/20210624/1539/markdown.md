# 题目

## 数组 哈希表

给你一个 严格升序排列 的正整数数组 arr 和一个整数 k 。

请你找到这个数组里第 k 个缺失的正整数。



### 示例 1：

```cpp
输入：arr = [2,3,4,7,11], k = 5
输出：9
解释：缺失的正整数包括 [1,5,6,8,9,10,12,13,...] 。第 5 个缺失的正整数为 9 。
```

### 示例 2：
```cpp
输入：arr = [1,2,3,4], k = 2
输出：6
解释：缺失的正整数包括 [5,6,7,...] 。第 2 个缺失的正整数为 6 。
```

### 提示：


```cpp
1 <= arr.length <= 1000
1 <= arr[i] <= 1000
1 <= k <= 1000
对于所有 1 <= i < j <= arr.length 的 i 和 j 满足 arr[i] < arr[j]
```
Related Topics 数组 哈希表
👍 47 👎 0
# 解题思路

## 桶排序

# 参考代码（By：liupeng）

```cpp

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <math>


class Solution1539 {
public:
    int findKthPositive(vector<int>& arr, int k) {
        std::vector<int> list_this = std::vector<int>(2021, 1);
        for (auto item : arr) {
            list_this[item] = 0;
        }
        for (int i=1;i<20;i++) {
            std::cout << list_this[i] << " ";
        }
        std::cout << std::endl;
        int sum = 0;
        int index = 1;
        while (sum < k) {
            sum = sum + list_this[index];
            std::cout << index << " ";
            index = index + 1;
        }
        return index - 1;
    }
};
```

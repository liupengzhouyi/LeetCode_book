# 题目

在一个小镇里，按从 1 到 N 标记了N 个人。传言称，这些人中有一个是小镇上的秘密法官。

如果小镇的法官真的存在，那么：

小镇的法官不相信任何人。
每个人（除了小镇法官外）都信任小镇的法官。
只有一个人同时满足属性 1 和属性 2 。
给定数组 trust，该数组由信任对 trust[i] = [a, b]组成，表示标记为 a 的人信任标记为 b 的人。

如果小镇存在秘密法官并且可以确定他的身份，请返回该法官的标记。否则，返回 -1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-the-town-judge
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
# 解题思路

# 参考代码（By：liupeng）

```cpp

#include <iostream>
#include <string>

class Solution997 {
public:
    std::vector<int> li = {};
    std::vector<int> lj = {};
    int findJudge(int n, std::vector<std::vector<int>>& trust) {
        for (std::vector<int> item : trust) {
            bool key = false;
            for (int v : li) {
                if (v == item[0]) {
                    key = true;
                    break;
                }
            }
            if (!key) {
                li.push_back(item[0]);
            }
            bool key1 = false;
            for (int v : li) {
                if (v == item[1]) {
                    key1 = true;
                    break;
                }
            }
            if (!key1) {
                li.push_back(item[1]);
            }
            bool key2 = false;
            for (int v : lj) {
                if (v == item[0]) {
                    key2 = true;
                    break;
                }
            }
            if (!key2) {
                lj.push_back(item[0]);
            }
        }
        std::cout << li.size() << " " <<  lj.size() << std::endl;
        if (li.size() == lj.size()) return -1;
        else {
            for (int item : li) {
                bool key = false;
                for (int k : lj) {
                    if (k == item) {
                        key = true;
                        break;
                    }
                }
                if (key == false) {
                    return item;
                }
            }
        }
        return -1;
    }
};
```

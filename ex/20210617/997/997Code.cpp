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
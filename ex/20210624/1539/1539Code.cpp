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
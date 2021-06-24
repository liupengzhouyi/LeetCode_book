#include <algorithm>
#include <iostream>
#include <vector>

class Solution561 {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            sum = nums[i] + sum;
            i = i + 1;
        }
        return sum;
    }
};
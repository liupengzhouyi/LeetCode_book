//
// Created by 刘鹏 on 2021/6/14.
//

#include <string>

class Solution {
public:
    bool detectCapitalUse(std::string word) {
        int up=0,low=0,n=word.size();
        if(n==1) return true;
        for(char ch:word)
            isupper(ch)?up++:low++;
        if(up==n||low==n || (up==1 && isupper(word[0]) && low==n-1)) return true;
        return false;
    }
};
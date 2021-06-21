class Solution441 {
public:
    int arrangeCoins(int n) {
        return (sqrt(1+8*(long long)n)-1)/2;
    }
};
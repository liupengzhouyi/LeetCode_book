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
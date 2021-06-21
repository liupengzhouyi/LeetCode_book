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
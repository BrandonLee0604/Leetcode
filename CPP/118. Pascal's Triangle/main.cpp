#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res(1,vector<int>(1,1));
        if (numRows == 1){
            return res;
        }
        int i = 2;
        while (i <= numRows){
            auto last = res[i-2];
            vector<int> tempVec(i,1);
            for(auto j =1; j<i-1;j++){
                tempVec[j] = last[j-1] + last[j];
            }
            res.push_back(tempVec);
            i++;
        }
        return res;
    }
};

int main() {
    auto res = Solution().generate(5);
    return 0;
}

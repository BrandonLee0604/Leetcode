//Given an integer array nums, return the third distinct maximum number in this array.
//If the third maximum does not exist, return the maximum number.
//
//Example 1:
//
//Input: nums = [3,2,1]
//Output: 1
//Explanation:
//The first distinct maximum is 3.
//The second distinct maximum is 2.
//The third distinct maximum is 1.
//Example 2:
//
//Input: nums = [1,2]
//Output: 2
//Explanation:
//The first distinct maximum is 2.
//The second distinct maximum is 1.
//The third distinct maximum does not exist, so the maximum (2) is returned instead.
//Example 3:
//
//Input: nums = [2,2,3,1]
//Output: 1
//Explanation:
//The first distinct maximum is 3.
//The second distinct maximum is 2 (both 2's are counted together since they have the same value).
//The third distinct maximum is 1.


#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int a = INT_MIN, b = INT_MIN, c = INT_MIN;
        for (auto i: nums){
            if (i > a && i < b){
                a = i;
            } else if (i > b && i < c) {
                a = b;
                b = i;
            } else if (i > c){
                a = b;
                b = c;
                c = i;
            }
        }
        return a == INT_MIN ? c : a;
    }
};

int main() {
    vector<int> nums {1,2};
    auto res = Solution().thirdMax(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

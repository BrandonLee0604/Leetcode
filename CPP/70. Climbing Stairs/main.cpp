/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

#include <iostream>

using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int res = 0;
        int i = 0;
        int pre = 1;
        int prepre = 0;
        while (i < n) {
            res = pre + prepre;
            prepre = pre;
            pre = res;
            i++;
        }
        return res;
    }
};

int main() {
    auto res = Solution().climbStairs(2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

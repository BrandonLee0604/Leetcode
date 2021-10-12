//You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
//
//Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.
//
//You may assume that you have an infinite number of each kind of coin.
//
//The answer is guaranteed to fit into a signed 32-bit integer.
//
// 
//Example 1:
//
//Input: amount = 5, coins = [1,2,5]
//Output: 4
//Explanation: there are four ways to make up the amount:
//5=5
//5=2+2+1
//5=2+1+1+1
//5=1+1+1+1+1
//Example 2:
//
//Input: amount = 3, coins = [2]
//Output: 0
//Explanation: the amount of 3 cannot be made up just with coins of 2.
//Example 3:
//
//Input: amount = 10, coins = [10]
//Output: 1

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);
//      dp[x] represents for the number of ways that the sum value equals x
        dp[0] = 1;
        for(int& coin : coins){
            for (int i=coin; i<=amount;++i){
//              If there is dp[i-coin], then add the coin will get dp[i]. So for each coin, there is dp[i] += dp[i-coin]
                dp[i] += dp[i-coin];
            }
        }
        return dp[amount];
    }
};

int main() {
    vector<int> coins = {1,2,5};
    auto res = Solution().change(5, coins);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

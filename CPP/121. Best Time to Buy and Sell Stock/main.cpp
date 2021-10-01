/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int minPrice = prices[0];
        for(auto i=0; i<prices.size(); i++){
            if (prices[i] > minPrice) {
                res = max(res, prices[i] - minPrice);
            } else if (prices[i] < minPrice){
                minPrice = prices[i];
            }
        }
        return res;
    }
};

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    auto res = Solution().maxProfit(prices);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

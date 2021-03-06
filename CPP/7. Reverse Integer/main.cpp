//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
//
//
//Example 1:
//
//Input: x = 123
//Output: 321
//Example 2:
//
//Input: x = -123
//Output: -321
//Example 3:
//
//Input: x = 120
//Output: 21
//Example 4:
//
//Input: x = 0
//Output: 0

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    int reverse(int x) {
        auto myStr = to_string(x);
        string res;
        if (myStr[0] == '-'){
            res = '-';
            std::reverse(myStr.begin()+1, myStr.end());
            res += myStr.substr(1);
        } else {
            std::reverse(myStr.begin(), myStr.end());
            res = myStr;
        }
        return atoi(res.c_str());
    }
};


int main() {
    auto res = Solution().reverse(-123);
    std::cout << res << std::endl;
    return 0;
}

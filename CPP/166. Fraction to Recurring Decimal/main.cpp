//Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.
//
//If the fractional part is repeating, enclose the repeating part in parentheses.
//
//If multiple answers are possible, return any of them.
//
//It is guaranteed that the length of the answer string is less than 104 for all the given inputs.

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        auto divide = numerator % denominator;
        if (divide == 0) {
            return to_string(numerator / denominator);
        }
        int up = abs(numerator), down = abs(denominator);
        string res = ((numerator<0) ^ (denominator<0) ? "-" : "") + to_string(up / down) + '.';
        unordered_map<int, int> myMap;

        for (int i=res.size(); up = up % down * 10; ++i){
            if (myMap.count(up)){
                res.insert(res.begin() + myMap[up], '(');
                res.push_back(')');
                break;
            }
            myMap[up] = i;
            res.push_back('0' + up / down);
        }
        return res;
    }
};

int main() {
    auto res = Solution().fractionToDecimal(5, 2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

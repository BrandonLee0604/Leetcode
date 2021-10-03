// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
// such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
//
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).


#include <iostream>

class Solution {
public:
    int fib(int n) {
        if (n < 2){
            return n;
        }
        int res = 0;
        int pre = 1;
        int prepre = 0;
        int i = 0;
        while (i < n-1) {
            res = pre + prepre;
            prepre = pre;
            pre = res;
            i++;
        }
        return res;
    }
};

int main() {
    auto res = Solution().fib(1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

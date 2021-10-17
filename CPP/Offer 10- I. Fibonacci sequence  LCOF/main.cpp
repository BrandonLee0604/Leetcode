#include <iostream>

class Solution {
public:
    int fib(int n) {
        int MOD = 1000000007;
        if (n < 2) {
            return n;
        }
        auto i = 2;
        auto res = 0;
        auto pre = 1, prePre = 0;
        while (i <= n){
            res = (pre + prePre) % MOD;
            prePre = pre;
            pre = res;
            i++;
        }
        return res;
    }
};

int main() {
    auto res = Solution().fib(5);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

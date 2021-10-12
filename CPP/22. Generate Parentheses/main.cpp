//Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
//
// 
//Example 1:
//
//Input: n = 3
//Output: ["((()))","(()())","(())()","()(())","()()()"]
//Example 2:
//
//Input: n = 1
//Output: ["()"]

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res(n, "()");

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

n = 4:
() () () ()     C(4,4)
(()) () () ()   C(3,1)
() (()) () ()
() () (()) ()
() () () (())
(())(())        C()
(()())()
()(()())
(()()())
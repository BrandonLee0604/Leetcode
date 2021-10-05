//Given a string s, return the longest palindromic substring in s.
//
//Example 1:
//
//Input: s = "babad"
//Output: "bab"
//Note: "aba" is also a valid answer.
//Example 2:
//
//Input: s = "cbbd"
//Output: "bb"
//Example 3:
//
//Input: s = "a"
//Output: "a"
//Example 4:
//
//Input: s = "ac"
//Output: "a"

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len < 2) {
            return s;
        }
        // begin for the beginning position of substring, maxLen for the length of substring
        int maxLen = 1;
        int begin = 0;
        vector<vector<int>> dp(len, vector<int>(len));
        // All substrings with length 1 are all Palindromic
        for (auto i=0; i< len; i++){
            dp[i][i] = true;
        }

        // Update dp by columns
        for (auto j=1;j<len;j++)  {
            for (auto i=0;i<j;i++){
                if (s[i] != s[j]){
                    dp[i][j] = false;
                } else {
                    // All strings with length <= 3 are all Palindromic
                    if (j-i < 3) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i+1][j-1];
                    }

                }
                if (dp[i][j] && j-i+1 > maxLen) {
                    maxLen = j-i+1;
                    begin = i;
                }
            }
        }
        return s.substr(begin, maxLen);
    }
};

int main() {
    auto res = Solution().longestPalindrome("cbbd");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//Convert a non-negative integer num to its English words representation.
//
//Example 1:
//
//Input: num = 123
//Output: "One Hundred Twenty Three"
//Example 2:
//
//Input: num = 12345
//Output: "Twelve Thousand Three Hundred Forty Five"
//Example 3:
//
//Input: num = 1234567
//Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
//Example 4:
//
//Input: num = 1234567891
//Output: "One Billion Two Hundred Thirty Four Million Five Hundred Sixty Seven Thousand Eight Hundred Ninety One"


#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<string> singles = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    vector<string> thousands = {"", "Thousand", "Million", "Billion"};

    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        string sb;
        for (int i = 3, unit = 1000000000; i >= 0; i--, unit /= 1000) {
            int curNum = num / unit;
            if (curNum != 0) {
                num -= curNum * unit;
                string curr;
                recursion(curr, curNum);
                curr = curr + thousands[i] + " ";
                sb = sb + curr;
            }
        }
        while (sb.back() == ' ') {
            sb.pop_back();
        }
        return sb;
    }

    void recursion(string & curr, int num) {
        if (num == 0) {
            return;
        } else if (num < 10) {
            curr = curr + singles[num] + " ";
        } else if (num < 20) {
            curr = curr + teens[num - 10] + " ";
        } else if (num < 100) {
            curr = curr + tens[num / 10] + " ";
            recursion(curr, num % 10);
        } else {
            curr = curr + singles[num / 100] + " Hundred ";
            recursion(curr, num % 100);
        }
    }

};

int main() {
    auto res = Solution().numberToWords(1);
    std::cout << res << std::endl;
    return 0;
}

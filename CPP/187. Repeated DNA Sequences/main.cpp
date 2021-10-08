//The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.
//
//For example, "ACGAATTCCG" is a DNA sequence.
//When studying DNA, it is useful to identify repeated sequences within the DNA.
//
//Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.
//You may return the answer in any order.
//
// 
//Example 1:
//
//Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
//Output: ["AAAAACCCCC","CCCCCAAAAA"]
//Example 2:
//
//Input: s = "AAAAAAAAAAAAA"
//Output: ["AAAAAAAAAA"]

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> myMap;
        vector<string> res;
        auto len = s.size();
        if (len <= 10){
            return {};
        }
        for (auto i=0; i<len-9; i++){
            string temp = s.substr(i, 10);
            if (++myMap[temp] == 2) {
                res.push_back(temp);
            }
        }
        return res;
    }
};
int main() {
    auto res = Solution().findRepeatedDnaSequences("AAAAAAAAAAAAA");
    std::cout << "Hello, World!" << std::endl;
    unordered_map<string, int> myMap;
    cout << myMap["eeer"] << endl;
    return 0;
}

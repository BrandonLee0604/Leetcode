// 131. 分割回文串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    vector<vector<string>> res;
    vector<string> temp;
    int n;

    vector<vector<string>> partition(string s) {
        n = s.length();
        if (n == 0)
            return res;
        backtravel(s, 0);
        return res;
    }

    void backtravel(string s, int index)
    {
        if (index == n)
        {
            res.push_back(temp);
            return;
        }
        for (int i = index; i < n; i++)
        {
            if (is_Palindromic(s.substr(index, i - index + 1)))
            {
                temp.push_back(s.substr(index, i - index + 1));
                backtravel(s, i + 1);
                temp.pop_back();
            }
        }
    }

    bool is_Palindromic(string s) {
        auto len = s.length(); //计算输入字符串的长度；
        for (auto i = 0; i < (len / 2); i++) //只需要判断前一半（len/2）长度就好了
        {
            if (s[i] != s[len - 1 - i]) //判断是否为回文数；
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    string s;
    auto solution = Solution();
    auto res = solution.partition(s);
    for (auto i : res) {
        
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

// 150. 逆波兰表达式求值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        auto res = 0;
        stack<string> str;
        for (auto i : tokens){
            if (i == "+") {
                int temp1 = stoi(str.top());
                str.pop();
                int temp2 = stoi(str.top());
                str.pop();
                str.push(to_string(temp1 + temp2));
            }
            else if (i == "-") {
                int temp1 = stoi(str.top());
                str.pop();
                int temp2 = stoi(str.top());
                str.pop();
                str.push(to_string(temp1 - temp2));
            }
            else if (i == "*") {
                int temp1 = stoi(str.top());
                str.pop();
                int temp2 = stoi(str.top());
                str.pop();
                str.push(to_string(temp1 * temp2));
            }
            else if (i == "/") {
                int temp1 = stoi(str.top());
                str.pop();
                int temp2 = stoi(str.top());
                str.pop();
                str.push(to_string(temp2 / temp1));
            }
            else {
                str.push(i);
            }
        }
        return stoi(str.top());
    }
};

int main()
{
    auto res = Solution();
    vector<string> tokens = { "2", "1", "+", "3", "*" };
    std::cout << res.evalRPN(tokens);
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

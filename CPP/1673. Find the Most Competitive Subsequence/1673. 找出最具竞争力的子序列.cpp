// 1673. 找出最具竞争力的子序列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//维持一个长度不超过k的单调递增栈，如果后面有数更小，就pop掉当前数，将后面小的数push进来
class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k)
    {
        int n = nums.size();
        vector<int> mono_in_stk;        //单调递增栈
        int max_del_cnt = n - k;        //最多可以扔掉多少
        for (int i = 0; i < n; i++)
        {
            while (!mono_in_stk.empty() && mono_in_stk.back() > nums[i] && max_del_cnt > 0) //单调递增栈，反而是把中间过程中peak扔掉了
            {
                mono_in_stk.pop_back();
                max_del_cnt -= 1;
            }
            mono_in_stk.push_back(nums[i]);
        }
        while (mono_in_stk.size() > k)      //长度也不能超
            mono_in_stk.pop_back();
        return mono_in_stk;
    }
};

int main()
{
    auto solution = Solution();
    vector<int> nums = { 2, 4, 3, 3, 5, 4, 9, 6 };
    int k = 4;
    for (auto i : solution.mostCompetitive(nums, k)) {
        std::cout << i;
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

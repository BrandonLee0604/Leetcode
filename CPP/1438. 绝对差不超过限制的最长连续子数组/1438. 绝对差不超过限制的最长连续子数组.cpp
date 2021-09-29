// 1438. 绝对差不超过限制的最长连续子数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        auto len = nums.size();
        auto res = 0;
        auto i = 0;
        while (i < len) {
            auto j = i;
            auto temp = 0;
            auto max = nums[i];
            auto min = nums[i];
            while (j < len) {
                if (nums[j] > max) {
                    max = nums[j];
                }
                else if (nums[j] < min) {
                    min = nums[j];
                }
                if (abs(max - min) <= limit) {
                    temp++;
                    j++;
                }
                else {
                    break;
                }
            }
            if (temp > res) {
                res = temp;
            }
            i++;
        }
        return res;
    }
};

int main()
{
    auto solution = Solution();
    vector<int> nums = { 1, 5, 6, 7, 8, 10, 6, 5, 6 };
    int limit = 4;
    auto res = solution.longestSubarray(nums, limit);
    std::cout << res;
    
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

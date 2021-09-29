class Solution:
    def subsetsWithDup(self, nums):
        ans = [[]]
        l = len(nums)
        for i in range(l):
            temp = [nums[i]]
            ans.append(temp[:])
            for j in range(i+1, l):
                temp.append(nums[j])
                ans.append(temp[:])
        return list(set(ans))

solution = Solution()
nums = [1,2,2]
res = solution.subsetsWithDup(nums)
print(res)

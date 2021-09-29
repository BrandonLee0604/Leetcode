class Solution:
    def pivotIndex(self, nums):
        total = sum(nums)
        temp = 0
        for i in range(0, len(nums)):
            if temp == (total - nums[i]) / 2:
                return i
            else:
                temp += nums[i]
        return -1

nums = [1, 7, 3, 6, 5, 6]
solution = Solution()
print(solution.pivotIndex(nums))
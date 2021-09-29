class Solution:
    def minSubarray(self, nums, p):
        total = sum(nums)
        if total < p:
            return 0
        if total % p == 0:
            return nums




nums = [3,1,4,2]
solution = Solution.minSubarray(nums)
print(solution)
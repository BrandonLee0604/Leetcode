class Solution:
    def findMaxAverage(self, nums, k):
        total = sum(nums[0:k])
        res = total
        i = 0
        j = i + k - 1
        while j <= len(nums)-2:
            temp = total - nums[i] + nums[j+1]
            total = temp
            res = max(temp, res)
            i += 1
            j += 1
        return res/k

nums = [1,12,-5,-6,50,3]
k = 4
solution = Solution()
print(solution.findMaxAverage(nums, k))
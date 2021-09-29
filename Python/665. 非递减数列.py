class Solution:
    def checkPossibility(self, nums) -> bool:
        changed = False
        for i in range(len(nums) - 1):
            if nums[i] > nums[i + 1]:
                if changed:
                    return False
                changed = True

                # 修改num[i]会导致nums[i-1] > nums[i]
                if i > 0 and nums[i - 1] > nums[i + 1]:
                    nums[i + 1] = nums[i]
                else:
                    nums[i] = nums[i + 1]
        return True




nums = [4,2,3]
l = [2,3,3,4]
solution = Solution()
print(solution.checkPossibility(nums))

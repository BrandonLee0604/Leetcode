def findLengthOfLCIS(nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    max = 0
    l = 1
    if len(nums) == 0:
        return 0
    if len(nums) == 1:
        return 1
    for i in range(len(nums) - 1):
        if nums[i + 1] > nums[i]:
            l += 1
            i += 1
            if i == len(nums)-1 and l > max:
                max = l
        else:
            if l > max:
                max = l
                l = 1
            else:
                l = 1
    return max

nums = [1,3,5,4,2,3,4,5]
print(findLengthOfLCIS(nums))

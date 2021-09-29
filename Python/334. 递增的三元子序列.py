def increasingTriplet(nums):
    """
    :type nums: List[int]
    :rtype: bool
    """
    flag = False
    l = len(nums)
    for i in range(0, l - 2):
        if nums[i + 1] > nums[i] and nums[i + 2] > nums[i + 1]:
            flag = True
            return flag
        elif nums[i + 1] <= nums[i]:
            i = i + 1
        elif nums[i + 2] <= nums[i + 1]:
            i = i + 2
    return flag

nums = [20,100,10,12,5,13]
print(increasingTriplet(nums))
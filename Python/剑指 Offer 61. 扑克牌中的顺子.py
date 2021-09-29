def isStraight(nums):
    """
    :type nums: List[int]
    :rtype: bool
    """
    nums.sort()
    zero = nums.count(0)
    for i in range(len(nums)-1):
        if nums[i] == 0:
            continue
        else:
            x = nums[i+1] - nums[i]
            if x == 0:
                return False
            if x != 1:
                zero -= x - 1
                if zero < 0:
                    return False
    return True




nums = [0,0,2,2,5]
print(isStraight(nums))
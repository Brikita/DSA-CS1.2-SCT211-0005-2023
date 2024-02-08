def singleNumber(nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    result = 0
    for num in nums:
        result ^= num
    return result

# Example usage
nums = [2, 2, 1,1,5,5,3]
print(singleNumber(nums))  # Output: 1

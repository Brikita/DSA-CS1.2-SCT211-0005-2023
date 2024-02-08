def contains_duplicates(nums):
  """
  :type nums: List[int]
  :rtype: bool
  """
  return any(nums.count(num) > 1 for num in nums)

# Test cases
test_cases = [
  ([1, 2, 3, 4, 5, 6, 1], True),
  ([1, 2, 3, 4, 5, 6], False),
  ([], False),
  ([1], False),
  ([1, 1], True),
]

for nums, expected_output in test_cases:
  output = contains_duplicates(nums)
  assert output == expected_output, f"Test failed for {nums}, expected {expected_output}, got {output}"

print("All test cases passed!")

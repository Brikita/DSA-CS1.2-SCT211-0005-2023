def remove_duplicates(nums):
  """
  Removes duplicates from a sorted array in-place.

  Args:
    nums: A list of integers representing a sorted array.

  Returns:
    The new length of the array after removing duplicates.
  """

  i = 0  # Index for the current unique element
  for j in range(1, len(nums)):
    if nums[i] != nums[j]:  # If the current element is different from the previous unique element
      i += 1  # Move the unique element pointer forward
      nums[i] = nums[j]  # Place the new unique element at the correct position

  return i + 1  # Return the new length of the array

# Example usage:
nums = [1, 1, 2, 3, 3]
new_length = remove_duplicates(nums)
print(f"Array after removing duplicates: {nums[:new_length]}")
print(f"New length of the array: {new_length}")

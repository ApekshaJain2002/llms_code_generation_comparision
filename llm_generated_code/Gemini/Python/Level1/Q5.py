def find_peak_element(arr):
  """
  Finds the index of a peak element in the array.

  Args:
      arr: A list of integers representing the array.

  Returns:
      The index of a peak element, or -1 if no peak is found.
  """

  if not arr:
    return -1

  n = len(arr)
  # Handle edge cases with negative infinity
  for i in range(n):
    left_val = float('-inf') if i == 0 else arr[i-1]
    right_val = float('inf') if i == n-1 else arr[i+1]

    if arr[i] > left_val and arr[i] > right_val:
      return i

  return -1

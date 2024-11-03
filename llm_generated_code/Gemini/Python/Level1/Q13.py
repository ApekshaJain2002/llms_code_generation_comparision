def max_sum_non_adjacent(arr):
  """
  Finds the maximum sum of non-adjacent elements in a circular array.

  Args:
      arr: The input array.

  Returns:
      The maximum sum.
  """

  n = len(arr)

  # Handle base cases
  if n == 1:
    return arr[0]
  elif n == 2:
    return max(arr[0], arr[1])

  # Calculate the maximum sum considering the first and last elements as non-adjacent
  dp = [0] * n
  dp[0] = arr[0]
  dp[1] = max(arr[0], arr[1])
  for i in range(2, n):
    dp[i] = max(dp[i - 1], dp[i - 2] + arr[i])

  # Consider the circular nature: exclude the first or last element
  max_sum1 = dp[n - 1]  # Excluding the last element
  max_sum2 = dp[n - 2] + arr[0]  # Excluding the first element

  return max(max_sum1, max_sum2)

# Example usage
arr = [1, 2, 3, 1]
max_sum = max_sum_non_adjacent(arr)
print("Maximum sum of non-adjacent elements:", max_sum)

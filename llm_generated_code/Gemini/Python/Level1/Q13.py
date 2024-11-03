def climb_stairs_dp(n):
  """
  Finds the number of distinct ways to climb N stairs using dynamic programming.

  Args:
      n: The number of stairs.

  Returns:
      The number of distinct ways to climb N stairs.
  """

  if n == 1:
    return 1
  elif n == 2:
    return 2

  # Initialize a list to store solutions for 0 to n stairs
  dp = [0] * (n + 1)

  # Base cases
  dp[1] = 1
  dp[2] = 2

  # Fill the dp list bottom-up
  for i in range(3, n + 1):
    dp[i] = dp[i - 1] + dp[i - 2]

  return dp[n]

# Example usage with dynamic programming
n = 4
num_ways = climb_stairs_dp(n)
print("Number of distinct ways to climb", n, "stairs (dynamic programming):", num_ways)

def climb_stairs(n):
  """
  Finds the number of distinct ways to climb N stairs.

  Args:
      n: The number of stairs.

  Returns:
      The number of distinct ways to climb N stairs.
  """

  # Base cases: 1 step for 1 stair, 2 steps for 2 stairs
  if n == 1:
    return 1
  elif n == 2:
    return 2

  # Recursive approach: sum of ways to reach (n-1)th and (n-2)th stair
  return climb_stairs(n - 1) + climb_stairs(n - 2)

# Example usage
n = 4
num_ways = climb_stairs(n)
print("Number of distinct ways to climb", n, "stairs:", num_ways)

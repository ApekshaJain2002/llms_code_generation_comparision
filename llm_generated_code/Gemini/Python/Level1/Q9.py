def fractional_knapsack(val, wt, W):
  """
  Solves the fractional knapsack problem to find the maximum value achievable.

  Args:
      val: A list representing the value of each item.
      wt: A list representing the weight of each item.
      W: The maximum weight capacity of the knapsack.

  Returns:
      A tuple containing:
          - The maximum value achievable
          - A list representing the fraction of each item to be taken (0 to 1)
  """

  n = len(val)
  ratio = [val[i] / wt[i] for i in range(n)]  # Calculate value/weight ratios

  # Sort items by decreasing ratio
  items = sorted(zip(val, wt, ratio), key=lambda x: x[2], reverse=True)
  val, wt, ratio = zip(*items)  # Unpack sorted items

  max_value = 0
  fraction = [0] * n  # Initialize fraction of each item to be taken

  for i in range(n):
    if wt[i] <= W:
      fraction[i] = 1  # Take the whole item if weight allows
      max_value += val[i]
      W -= wt[i]
    else:
      fraction[i] = W / wt[i]  # Take a fraction based on remaining capacity
      max_value += val[i] * fraction[i]
      break  # Break after using remaining capacity

  return max_value, fraction

# Example usage
val = [60, 100, 120]
wt = [10, 20, 30]
W = 50

max_value, fraction_taken = fractional_knapsack(val, wt, W)
print("Maximum value:", max_value)
print("Fraction of each item taken:", fraction_taken)

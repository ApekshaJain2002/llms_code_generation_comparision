def max_profit(prices):
  """
  Finds the maximum profit achievable by buying and selling a stock once.

  Args:
      prices: A list of stock prices on each day.

  Returns:
      The maximum profit achievable.
  """

  if not prices:
    return 0

  min_price = prices[0]  # Initialize minimum price to first day's price
  max_profit = 0  # Initialize maximum profit to 0

  for price in prices:
    # Update minimum price if current price is lower
    min_price = min(min_price, price)
    # Calculate potential profit for each day by subtracting min price
    profit = price - min_price
    # Update maximum profit if current profit is higher
    max_profit = max(max_profit, profit)

  return max_profit

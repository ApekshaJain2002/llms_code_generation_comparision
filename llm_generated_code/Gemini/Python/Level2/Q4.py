def max_profit(prices):
"""
Calculates the maximum profit that can be obtained by buying and selling a gem.

Args:
    prices: A list of integers representing the daily prices of the gem.

Returns:
    The maximum profit that can be achieved.
"""

if not prices:
    return 0

min_price = prices[0]
max_profit = 0

for price in prices:
    min_price = min(min_price, price)
    max_profit = max(max_profit, price - min_price)   


return max_profit

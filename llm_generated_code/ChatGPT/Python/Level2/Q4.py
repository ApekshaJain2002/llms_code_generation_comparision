def max_profit(prices):
    if not prices:
        return 0

    min_price = float('inf')
    max_profit = 0

    for price in prices:
        # Update min_price if we find a new lower price
        if price < min_price:
            min_price = price
        # Calculate profit if we sell at the current price
        elif price - min_price > max_profit:
            max_profit = price - min_price

    return max_profit

# Example usage
prices = [7, 1, 5, 3, 6, 4]
profit = max_profit(prices)
print("Maximum profit Rohan can achieve:", profit)


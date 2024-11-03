def max_profit(prices):
    if not prices:
        return 0

    # Initialize min_price to a very high value and max_profit to 0
    min_price = float('inf')
    max_profit = 0

    # Traverse through the list of prices
    for price in prices:
        if price < min_price:
            # Update min_price to the current price if it's lower than previously found
            min_price = price
        elif price - min_price > max_profit:
            # Calculate the profit from the current price minus the minimum price found so far
            max_profit = price - min_price

    return max_profit


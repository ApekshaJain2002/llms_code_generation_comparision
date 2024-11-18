def max_profit(prices, fee):
    cash, hold = -prices[0], 0
    for price in prices:
        cash = max(cash, hold - price - fee)
        hold = max(hold, cash + price - fee)
    return max(cash, hold)
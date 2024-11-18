def max_profit(prices, fee):
    hold, cash = -prices[0], 0
    for price in prices[1:]:
        cash = max(cash, hold + price - fee)
        hold = max(hold, cash - price)
    return cash

prices = [1, 3, 2, 8, 4, 9]
fee = 2
print(max_profit(prices, fee))

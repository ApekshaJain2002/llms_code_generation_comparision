def maxProfit(prices):
    if not prices or len(prices) < 2:
        return 0
    
    n = len(prices)
    profit1 = [0] * n
    profit2 = [0] * n
    
    min_price = prices[0]
    for i in range(1, n):
        min_price = min(min_price, prices[i])
        profit1[i] = max(profit1[i - 1], prices[i] - min_price)
    
    max_price = prices[-1]
    for i in range(n - 2, -1, -1):
        max_price = max(max_price, prices[i])
        profit2[i] = max(profit2[i + 1], max_price - prices[i])
    
    max_profit = 0
    for i in range(n):
        max_profit = max(max_profit, profit1[i] + profit2[i])
    
    return max_profit

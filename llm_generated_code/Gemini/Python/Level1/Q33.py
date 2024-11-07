n = len(prices)
    if n < 2:
        return 0
    right_max = [0] * n
    right_max[-1] = 0
    for i in range(n - 2, -1, -1):
        right_max[i] = max(right_max[i + 1], prices[i + 1] - prices[i])
    left_min = prices[0]
    max_profit = 0
    for i in range(1, n):
        max_profit = max(max_profit, prices[i] - left_min + right_max[i])
        left_min = min(left_min, prices[i])
    return max_profit

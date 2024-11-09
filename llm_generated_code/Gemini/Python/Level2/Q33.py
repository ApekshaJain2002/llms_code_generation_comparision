def max_profit(prices):
    n = len(prices)
    profit = 0

    max_profit_once = 0
    min_price = prices[0]
    for i in range(1, n):
        max_profit_once = max(max_profit_once, prices[i] - min_price)
        min_price = min(min_price, prices[i])

    max_profit_twice = 0
    max_so_far = prices[n - 1]
    for i in range(n - 2, -1, -1):
        max_profit_twice = max(max_profit_twice, max_so_far - prices[i] + max_profit_once)
        max_so_far = max(max_so_far, prices[i])

    return max(max_profit_once, max_profit_twice)

def main():
    n = int(input())
    prices = list(map(int, input().split()))
    print(max_profit(prices))

if __name__ == "__main__":
    main()

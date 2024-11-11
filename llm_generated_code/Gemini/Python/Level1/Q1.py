def max_revenue(brands, shelves):
    n = len(brands)
    dp = [[0] * (shelves + 1) for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(1, shelves + 1):
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + brands[i - 1][1] * max(0, j - 1))

    return dp[n][shelves]

# Input:
t = int(input())
for _ in range(t):
    n, shelves = map(int, input().split())
    brands = []
    for _ in range(n):
        brand, price = map(int, input().split())
        brands.append((brand, price))

    # Sort brands by price in descending order
    brands.sort(key=lambda x: x[1], reverse=True)

    # Calculate maximum revenue
    max_profit = max_revenue(brands, shelves)
    print(max_profit)

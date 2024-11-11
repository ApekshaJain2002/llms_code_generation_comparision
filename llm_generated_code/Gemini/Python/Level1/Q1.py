def max_revenue(n, k, brands, costs):
    # Sort bottles by cost-to-brand ratio in descending order
    bottles = sorted(zip(brands, costs), key=lambda x: x[1] / x[0], reverse=True)

    # Initialize a list to track the number of bottles of each brand on each shelf
    shelf_counts = [0] * n

    total_revenue = 0
    for brand, cost in bottles:
        # Find the first available shelf for this brand
        for i in range(n):
            if shelf_counts[i] == 0 or shelf_counts[i] == brand:
                shelf_counts[i] = brand
                total_revenue += cost
                break

    return total_revenue

# Read the number of test cases
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    brands = list(map(int, input().split()))
    costs = list(map(int, input().split()))

    result = max_revenue(n, k, brands, costs)
    print(result)

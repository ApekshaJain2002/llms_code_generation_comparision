def min_operations(jewels):
    odd_count = 0
    even_count = 0
    
    for power in jewels:
        if power % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    # The minimum number of operations needed to make all elements have the same parity
    # is the minimum of converting all to even or all to odd
    return min(odd_count, even_count)

# Read input
t = int(input())
results = []

for _ in range(t):
    n = int(input())
    jewels = list(map(int, input().split()))
    result = min_operations(jewels)
    results.append(result)

for result in results:
    print(result)

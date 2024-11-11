def count_ways(n, k):
    ways = 1
    for i in range(k):
        if (1 << i) > n:
            break
        ways *= 2
    return ways

t = int(input())
results = []
for _ in range(t):
    n, k = map(int, input().split())
    results.append(count_ways(n, k))

for result in results:
    print(result)

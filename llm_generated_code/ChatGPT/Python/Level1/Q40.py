from math import gcd
from functools import reduce

def max_k_possible(a, n):
    diffs = [abs(a[i] - a[i + 1]) for i in range(0, n, 2)]
    common_gcd = reduce(gcd, diffs)
    return common_gcd if common_gcd > 0 else -1

t = int(input())
results = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    results.append(max_k_possible(a, n))

for result in results:
    print(result)

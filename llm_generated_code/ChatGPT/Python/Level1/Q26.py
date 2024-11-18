from collections import Counter

def min_operations_to_equilateral(sticks):
    freq = Counter(sticks)
    max_freq = max(freq.values())
    if max_freq >= 3:
        return 0
    elif max_freq == 2:
        return 1
    else:
        return 2

t = int(input())
results = []
for _ in range(t):
    n = int(input())
    sticks = list(map(int, input().split()))
    results.append(min_operations_to_equilateral(sticks))

print(*results, sep='\n')

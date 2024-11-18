def can_be_strictly_increasing(n, a):
    return "YES" if len(set(a)) == n else "NO"

t = int(input())
results = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    results.append(can_be_strictly_increasing(n, a))
print("\n".join(results))

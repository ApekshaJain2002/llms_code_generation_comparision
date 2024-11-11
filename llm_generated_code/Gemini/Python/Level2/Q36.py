def min_operations(a):
    n = len(a)
    a.sort()
    return n - a.count(a[0]) - a.count(a[-1]) + 1

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(min_operations(a))

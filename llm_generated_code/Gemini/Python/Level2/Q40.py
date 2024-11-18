def max_k(arr):
    n = len(arr)
    max_diff = max(arr) - min(arr)
    if max_diff == 0:
        return -1  
    return max_diff // (n - 1)

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(max_k(arr))

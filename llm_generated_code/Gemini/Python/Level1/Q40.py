def max_k(arr):
    n = len(arr)
    if n == 1:
        return -1
    
    arr.sort(reverse=True)
    max_diff = arr[0] - arr[1]
    for i in range(1, n - 1):
        max_diff = max(max_diff, arr[i] - arr[i + 1])
    
    return max_diff

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    print(max_k(arr))

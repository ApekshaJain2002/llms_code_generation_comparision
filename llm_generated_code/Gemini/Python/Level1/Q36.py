def min_operations(a):
    n = len(a)
    if n == 1:
        return 0
    
    freq = {}
    for num in a:
        freq[num] = freq.get(num, 0) + 1
    
    max_freq = max(freq.values())
    return n - max_freq

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(min_operations(a))


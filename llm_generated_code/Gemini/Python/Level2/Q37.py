def min_coins(s):
    n = len(s)
    count = 0
    for i in range(n):
        if s[i] == '1':
            count += 1
    return min(count, n - count)

t = int(input())
for _ in range(t):
    s = input()
    print(min_coins(s))

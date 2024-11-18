t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    flag = False
    result = -1

    for i in range(n + 1):
        c = sum(1 for x in a if x > i)
        if c == i:
            flag = True
            result = i
            break

    print(result if flag else -1)

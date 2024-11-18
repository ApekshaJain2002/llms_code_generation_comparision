t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    s = -1
    v = []
    for x in a:
        if x % 2 == 0:
            v.append(x)
        elif x > s:
            s = x
    v.sort()

    if s == -1 or not v:
        print(0)
        continue
    
    ans = len(v)
    for t in v:
        if t < s:
            s += t
        else:
            ans += 1
            break

    print(ans)

def solve():
    n = int(input())
    n = n - n % 10 + (n % 10 + 1) % 10
    while n > 9:
        if n % 10 == 0:
            print("NO")
            return
        n //= 10
    print("YES" if n == 1 else "NO")

t = int(input())
for _ in range(t):
    solve()

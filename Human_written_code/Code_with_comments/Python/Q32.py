t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    if (a + b) % 2 == 0:
        print("Bob")
    else:
        print("Alice")

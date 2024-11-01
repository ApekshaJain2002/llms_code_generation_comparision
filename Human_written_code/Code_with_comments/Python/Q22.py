def solve():
    a, b, c, d = map(int, input().split())

    x = a * d
    y = b * c

    if x == y:
        print(0)
    elif (y != 0 and x % y == 0) or (x != 0 and y % x == 0):
        print(1)
    else:
        print(2)

def main():
    T = int(input())
    for _ in range(T):
        solve()

if __name__ == "__main__":
    main()

def main():
    n = int(input().strip())
    x = []
    y = []
    z = []
    for _ in range(n):
        xi, yi, zi = map(int, input().split())
        x.append(xi)
        y.append(yi)
        z.append(zi)
    sum1 = sum(x)
    sum2 = sum(y)
    sum3 = sum(z)
    if sum1 == 0 and sum2 == 0 and sum3 == 0:
        print("YES")
    else:
        print("NO")
if __name__ == "__main__":
    main()

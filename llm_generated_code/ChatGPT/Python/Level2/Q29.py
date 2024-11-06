def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        stones = list(map(int, input().split()))
        stones.sort()
        
        for i in range(1, n):
            if stones[i] <= stones[i - 1]:
                print("NO")
                break
        else:
            print("YES")

if __name__ == "__main__":
    main()

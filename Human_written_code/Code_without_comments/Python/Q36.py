def main():
    t = int(input())
    for _ in range(t):
        res = 0
        n = int(input())
        arr = list(map(int, input().split()))
        
        count_map = {}
        for num in arr:
            count_map[num] = count_map.get(num, 0) + 1

        ans = max(count_map.values())
        
        while ans < n:
            if 2 * ans > n:
                res += 1 + (n - ans)
                ans = n
            else:
                res += 1 + ans
                ans *= 2

        print(res)

if __name__ == "__main__":
    main()

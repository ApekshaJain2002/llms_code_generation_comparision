def main():
    t = int(input())
    
    for _ in range(t):
        n, k = map(int, input().split())
        desserts = [2 ** i for i in range(k)]
        ways = 0
        
        for i in range(1 << k):
            total_cost = 0
            for j in range(k):
                if i & (1 << j):
                    total_cost += desserts[j]
            if total_cost <= n:
                ways += 1
        
        print(ways)

if __name__ == "__main__":
    main()

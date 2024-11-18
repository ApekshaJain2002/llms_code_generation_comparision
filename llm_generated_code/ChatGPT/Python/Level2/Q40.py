def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        
        gcd = arr[0]
        for num in arr[1:]:
            while num != 0:
                gcd, num = num, gcd % num
        
        print(gcd)

if __name__ == "__main__":
    main()

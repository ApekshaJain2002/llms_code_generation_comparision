def main():
    t = int(input())
    
    for _ in range(t):
        n, k, f = map(int, input().split())
        a = list(map(int, input().split()))
        favorite_value = a[f-1]
        sorted_a = sorted(a, reverse=True)
        
        if sorted_a[:k].count(favorite_value) > 0:
            if sorted_a[:k].count(favorite_value) == 1 and a.count(favorite_value) == 1:
                print("YES")
            else:
                print("MAYBE")
        else:
            print("NO")

if __name__ == "__main__":
    main()

def main():
    t = int(input())
    for _ in range(t):
        n, f, k = map(int, input().split())
        
        cubes = list(map(int, input().split()))
        fav = cubes[f - 1]
        cubes.sort(reverse=True)
        
        a, b = True, True
        for i in range(k):
            if cubes[i] == fav:
                b = False
                
        for i in range(k, n):
            if cubes[i] == fav:
                a = False
        
        if a:
            print("YES")
        elif b:
            print("NO")
        else:
            print("MAYBE")

if __name__ == "__main__":
    main()

def main():
    t = int(input().strip())  
    for _ in range(t):
        n = int(input().strip())  
        arr = set()  
        duplicate_found = False
        for _ in range(n):
            inp = int(input().strip())  
            if not duplicate_found:
                if inp not in arr:
                    arr.add(inp)  
                else:
                    duplicate_found = True  
        print("NO" if duplicate_found else "YES")
if __name__ == "__main__":
    main()

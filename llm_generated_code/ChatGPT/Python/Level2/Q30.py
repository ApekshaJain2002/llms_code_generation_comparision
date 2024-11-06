def main():
    t = int(input())
    for _ in range(t):
        s = input()
        
        if len(set(s)) == 1:
            print(-1)
        else:
            print(4)

if __name__ == "__main__":
    main()

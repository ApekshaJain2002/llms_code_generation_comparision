def main():
    t = int(input())
    for _ in range(t):
        s = input()
        
        cnt = [0, 0]
        for c in s:
            cnt[int(c)] += 1

        for i in range(len(s) + 1):
            if i == len(s) or cnt[1 - int(s[i])] == 0:
                print(len(s) - i)
                break
            cnt[1 - int(s[i])] -= 1

if __name__ == "__main__":
    main()

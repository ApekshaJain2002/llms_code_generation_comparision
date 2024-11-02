def main():
    t = int(input().strip())
    for _ in range(t):
        n = int(input().strip())
        target = "meow"
        s = input().strip()
        cnt = 0
        if (s[0] not in ('m', 'M')) or (s[-1] not in ('w', 'W')):
            cnt = -1
        else:
            j = 0  
            for i in range(1, n):
                if s[i].lower() != target[j]:
                    j += 1
                    if j >= len(target):
                        cnt = -1
                        break
                if s[i].lower() != target[j]:
                    cnt = -1
                    break
        if cnt == -1:
            print("NO")
        else:
            print("YES")
if __name__ == "__main__":
    main()

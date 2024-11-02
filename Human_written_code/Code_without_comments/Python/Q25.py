def main():
    s = input().strip()
    n = len(s)
    flag = False
    check = True
    for char in s:
        if char not in {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'}:
            check = False
            break
    if check:
        t = s[::-1]
        flag = (s == t)
    if flag:
        print("YES")
    else:
        print("NO")
if __name__ == "__main__":
    main()

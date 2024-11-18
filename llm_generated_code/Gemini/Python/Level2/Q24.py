def is_dangerous(s):
    count = 0
    for i in range(len(s)):
        if s[i] == s[i-1]:
            count += 1
        else:
            count = 1
        if count >= 7:
            return True
    return False

def main():
    s = input()
    print("YES" if is_dangerous(s) else "NO")

if __name__ == "__main__":
    main()

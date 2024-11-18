def is_meow(s):
    i = 0
    while i < len(s) and (s[i] == 'm' or s[i] == 'M'):
        i += 1
    while i < len(s) and (s[i] == 'e' or s[i] == 'E'):
        i += 1
    while i < len(s) and (s[i] == 'o' or s[i] == 'O'):
        i += 1
    while i < len(s) and (s[i] == 'w' or s[i] == 'W'):
        i += 1
    return i == len(s)

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES" if is_meow(s) else "NO")

if __name__ == "__main__":
    main()

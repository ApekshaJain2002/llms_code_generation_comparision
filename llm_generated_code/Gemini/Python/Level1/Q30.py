def min_operations(s):
    if s.count('1') == 4:
        return 0
    elif s.count('1') == 0:
        return 2
    elif s.count('1') == 1:
        return 2 if s[1] == '1' else 3
    elif s.count('1') == 2:
        if s[0] == '1' and s[3] == '1':
            return 2
        elif s[1] == '1' and s[2] == '1':
            return 2
        else:
            return 3
    else:
        return 2

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print(min_operations(s))

if __name__ == "__main__":
    main()

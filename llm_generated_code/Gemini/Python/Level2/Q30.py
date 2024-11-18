def min_operations(s):
    if len(set(s)) == 1:
        return -1
    else:
        return 2

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print(min_operations(s))

if __name__ == "__main__":
    main()

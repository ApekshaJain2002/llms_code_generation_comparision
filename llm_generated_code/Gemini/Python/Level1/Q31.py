def winner(a, b):
    if a == 0 or b == 0:
        return "Bob" if a == 0 else "Alice"
    if a > b:
        return "Alice"
    else:
        return "Bob"

def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(winner(a, b))

if __name__ == "__main__":
    main()

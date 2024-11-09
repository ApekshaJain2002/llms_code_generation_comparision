def winner(a, b):
    if a == b:
        return "Alice" if a % 2 == 1 else "Bob"
    else:
        return "Alice" if a > b else "Bob"

def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(winner(a, b))

if __name__ == "__main__":
    main()

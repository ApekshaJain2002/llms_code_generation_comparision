def min_trips(n, k):
    return (n + k - 1) // k

def main():
    n, k = map(int, input().split())
    print(min_trips(n, k))

if __name__ == "__main__":
    main()

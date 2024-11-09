from collections import Counter

def min_operations(arr):
    count = Counter(arr)
    min_ops = float('inf')
    for length, freq in count.items():
        if freq >= 3:
            return 0
        elif freq >= 2:
            min_ops = min(min_ops, abs(length - (length + 1)) + abs(length - (length - 1))) // 2)
    return min_ops if min_ops != float('inf') else -1

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        print(min_operations(arr))

if __name__ == "__main__":
    main()

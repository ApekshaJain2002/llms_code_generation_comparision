def min_operations(lengths):
    n = len(lengths)
    min_ops = float('inf')
    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            target_length = (lengths[i] + lengths[j]) // 2
            ops = 0
            for k in range(n):
                ops += abs(lengths[k] - target_length)
            min_ops = min(min_ops, ops)
    return min_ops

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        lengths = list(map(int, input().split()))
        print(min_operations(lengths))

if __name__ == "__main__":
    main()

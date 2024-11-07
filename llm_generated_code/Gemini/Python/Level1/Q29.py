def is_strictly_increasing(arr):
    arr.sort()
    for i in range(1, len(arr)):
        if arr[i] <= arr[i - 1]:
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        print("YES" if is_strictly_increasing(arr) else "NO")

if __name__ == "__main__":
    main()

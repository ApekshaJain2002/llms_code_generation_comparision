def min_operations(arr):
    odd_count = sum(1 for x in arr if x % 2 != 0)
    even_count = len(arr) - odd_count
    return min(odd_count, even_count)

def main():
    t = int(input())
    results = []
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        results.append(min_operations(arr))
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()

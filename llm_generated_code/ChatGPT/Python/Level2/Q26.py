def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        sticks = list(map(int, input().split()))
        
        min_operations = float('inf')
        
        for target in range(min(sticks), max(sticks) + 1):
            operations = 0
            for stick in sticks:
                operations += abs(stick - target)
            min_operations = min(min_operations, operations)
        
        print(min_operations)

if __name__ == "__main__":
    main()

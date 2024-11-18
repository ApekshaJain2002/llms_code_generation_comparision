for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    frequency = {}
    for num in a:
        frequency[num] = frequency.get(num, 0) + 1
    max_frequency = max(frequency.values())
    result = n - max_frequency
    print(result)

def min_operations_to_equal_elements(n, a):
    freq = {}
    for num in a:
        freq[num] = freq.get(num, 0) + 1
    max_freq = max(freq.values())
    if max_freq == n:
        return 0
    operations = 0
    current_copies = max_freq
    while current_copies < n:
        operations += 1
        to_add = min(current_copies, n - current_copies)
        current_copies += to_add
        operations += to_add
    return operations

t = int(input())
results = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    results.append(min_operations_to_equal_elements(n, a))

for result in results:
    print(result)

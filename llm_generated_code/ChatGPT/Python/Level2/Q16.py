def find_missing_treasure(treasures, N):
    total_sum = N * (N + 1) // 2
    found_sum = sum(treasures)
    return total_sum - found_sum

treasures = [1, 2, 3, 5]
N = 5
print(find_missing_treasure(treasures, N))

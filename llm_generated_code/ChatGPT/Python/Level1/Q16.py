def find_missing_number(arr, N):
    return N * (N + 1) // 2 - sum(arr)

def max_consecutive_ones(arr):
    max_count = 0
    curr_count = 0
    for num in arr:
        if num == 1:
            curr_count += 1
            max_count = max(max_count, curr_count)
        else:
            curr_count = 0
    return max_count

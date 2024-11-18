def max_subarray_sum(arr):
    max_so_far = arr[0]
    max_ending_here = arr[0]
    start = 0
    end = 0
    s = 0

    for i in range(1, len(arr)):
        max_ending_here = max(arr[i], max_ending_here + arr[i])
        max_so_far = max(max_so_far, max_ending_here)
        if max_ending_here == arr[i]:
            s = i
        end = i
    print("Subarray:", arr[s:end+1])
    return max_so_far
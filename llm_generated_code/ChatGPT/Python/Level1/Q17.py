def max_subarray_sum(arr):
    max_sum = current_sum = arr[0]
    start = end = temp_start = 0

    for i in range(1, len(arr)):
        if arr[i] > current_sum + arr[i]:
            current_sum = arr[i]
            temp_start = i
        else:
            current_sum += arr[i]

        if current_sum > max_sum:
            max_sum = current_sum
            start = temp_start
            end = i

    return max_sum, arr[start:end+1]

# Example usage
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
result_sum, result_subarray = max_subarray_sum(arr)
print("Maximum Sum:", result_sum)
print("Subarray with Maximum Sum:", result_subarray)

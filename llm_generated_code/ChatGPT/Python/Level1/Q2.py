def move_zeros_to_end(arr):
    # This index tracks the position to place the next non-zero element.
    non_zero_index = 0

    # First pass: place all non-zero elements at the beginning of the array.
    for num in arr:
        if num != 0:
            arr[non_zero_index] = num
            non_zero_index += 1

    # Second pass: fill the rest of the array with zeros.
    for i in range(non_zero_index, len(arr)):
        arr[i] = 0

    return arr


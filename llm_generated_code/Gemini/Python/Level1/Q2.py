def move_zeros_to_end(arr):
    """
    Moves all zeros to the end of an array, preserving the order of non-zero elements.

    Args:
        arr: The input array.

    Returns:
        The modified array with zeros at the end.
    """

    next_pos = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[next_pos] = arr[i]
            next_pos += 1

    for i in range(next_pos, len(arr)):
        arr[i] = 0

    return arr

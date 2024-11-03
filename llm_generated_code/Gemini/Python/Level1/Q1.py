
def find_largest_element(arr):
    """
    Finds the largest element in an array.

    Args:
        arr: The input array.

    Returns:
        The largest element in the array.
    """

    if not arr:
        return None

    largest = arr[0]
    for num in arr:
        if num > largest:
            largest = num
    return largest

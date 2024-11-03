def find_largest_element(arr):
    # Initial check for an empty array
    if not arr:
        return None  # Return None if the array is empty

    # Start with the first element as the largest
    max_element = arr[0]

    # Iterate through the array starting from the first index
    for element in arr:
        # Update max_element if a larger element is found
        if element > max_element:
            max_element = element

    return max_element

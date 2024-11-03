def find_peak(mountains):
    left, right = 0, len(mountains) - 1

    while left < right:
        mid = (left + right) // 2
        # Check if mid is a peak
        if mountains[mid] > mountains[mid - 1] and mountains[mid] > mountains[mid + 1]:
            return mid
        # If the left neighbor is greater, move the search to the left side
        elif mountains[mid - 1] > mountains[mid]:
            right = mid - 1
        # Otherwise, move to the right side
        else:
            left = mid + 1

    # Left and right converge at a peak index
    return left

# Example usage
mountains = [1, 3, 20, 4, 1, 0]
peak_index = find_peak(mountains)
print("One of the peaks is at index:", peak_index, "with height:", mountains[peak_index])


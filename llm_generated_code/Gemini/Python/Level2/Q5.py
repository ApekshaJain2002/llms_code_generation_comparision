def find_peaks(heights):
    """
    Finds all peaks in a list of mountain heights.

    Args:
        heights: A list of integers representing the heights of the mountains.

    Returns:
        A list of indices of the peaks.
    """

    peaks = []
    for i in range(len(heights)):
        if (i == 0 and heights[i] > heights[i + 1]) or \
           (i == len(heights) - 1 and heights[i] > heights[i - 1]) or \
           (heights[i] > heights[i - 1] and heights[i] > heights[i + 1]):
            peaks.append(i)

    return peaks

# Example usage:
heights = [1, 2, 3, 2, 1, 2, 3, 2, 1]
peaks = find_peaks(heights)
print("Peaks are at indices:", peaks)

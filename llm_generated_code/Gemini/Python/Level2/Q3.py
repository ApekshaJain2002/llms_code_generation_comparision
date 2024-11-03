def sort_marbles(marbles):
    """
    Sorts a list of marbles by color using the Dutch National Flag algorithm.

    Args:
        marbles: A list of integers representing the colors of the marbles (0 for red, 1 for blue, 2 for green).

    Returns:
        The sorted list of marbles.
    """

    low = 0
    mid = 0
    high = len(marbles) - 1

    while mid <= high:
        if marbles[mid] == 0:
            marbles[low], marbles[mid] = marbles[mid], marbles[low]
            low += 1
            mid += 1
        elif marbles[mid] == 1:
            mid += 1
        else:
            marbles[mid], marbles[high] = marbles[high], marbles[mid]
            high -= 1

    return marbles

# Example usage:
marbles = [2, 0, 1, 2, 1, 0]
sorted_marbles = sort_marbles(marbles)
print("Sorted marbles:", sorted_marbles)

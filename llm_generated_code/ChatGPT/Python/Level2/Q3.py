def sort_marbles(marbles):
    # Pointers for red, blue, and green marbles
    low, mid, high = 0, 0, len(marbles) - 1

    # Process all elements in the list
    while mid <= high:
        if marbles[mid] == 0:  # Red marble
            marbles[low], marbles[mid] = marbles[mid], marbles[low]
            low += 1
            mid += 1
        elif marbles[mid] == 1:  # Blue marble
            mid += 1
        else:  # Green marble
            marbles[mid], marbles[high] = marbles[high], marbles[mid]
            high -= 1

    return marbles

# Example usage
marbles = [2, 0, 1, 2, 1, 0]
sorted_marbles = sort_marbles(marbles)
print("Marbles sorted by color:", sorted_marbles)


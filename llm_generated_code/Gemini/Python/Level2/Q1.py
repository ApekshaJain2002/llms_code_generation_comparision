def find_max_chocolates(chocolates):
    """
    Finds the maximum number of chocolates among a list of friends.

    Args:
        chocolates: A list of integers representing the number of chocolates each friend has.

    Returns:
        The maximum number of chocolates.
    """

    max_chocolates = 0
    for chocolate in chocolates:
        if chocolate > max_chocolates:
            max_chocolates = chocolate
    return max_chocolates

# Example usage:
chocolates = [5, 2, 12, 20, 1]
max_chocolates = find_max_chocolates(chocolates)
print("The highest number of chocolates is:", max_chocolates)

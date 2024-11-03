def rearrange_baskets(baskets):
    """
    Rearranges a list of baskets, moving empty baskets to the end.

    Args:
        baskets: A list of integers, where 0 represents an empty basket and a positive integer represents the number of balls.

    Returns:
        The rearranged list of baskets.
    """

    write_index = 0
    for read_index in range(len(baskets)):
        if baskets[read_index] != 0:
            baskets[write_index], baskets[read_index] = baskets[read_index], baskets[write_index]
            write_index += 1

    return baskets

# Example usage:
baskets = [2, 0, 1, 0, 3]
rearranged_baskets = rearrange_baskets(baskets)
print("Rearranged baskets:", rearranged_baskets)

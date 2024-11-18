def fractional_knapsack(weights, values, capacity):
    """
    Solves the fractional knapsack problem using a greedy approach.

    Args:
        weights: A list of item weights.
        values: A list of item values.
        capacity: The maximum capacity of the knapsack.

    Returns:
        The maximum value that can be obtained.
    """

    n = len(weights)
    items = sorted(enumerate(values), key=lambda x: x[1] / weights[x[0]], reverse=True)

    total_value = 0
    current_weight = 0

    for item_index, value in items:
        weight = weights[item_index]
        if current_weight + weight <= capacity:
            total_value += value
            current_weight += weight
        else:
            remaining_capacity = capacity - current_weight
            fraction = remaining_capacity / weight
            total_value += fraction * value
            break

    return total_value

# Example usage:
weights = [2, 3, 5, 7]
values = [10, 5, 15, 7]
capacity = 8
max_value = fractional_knapsack(weights, values, capacity)
print("Maximum value:", max_value)

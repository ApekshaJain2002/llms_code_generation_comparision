def fractional_knapsack(weights, values, capacity):
    # Calculate value-to-weight ratio for each item and store them with their original indices
    items = sorted([(values[i] / weights[i], weights[i], values[i]) for i in range(len(weights))], reverse=True)

    total_value = 0.0
    for ratio, weight, value in items:
        if capacity >= weight:
            # Take the whole item if the remaining capacity allows
            capacity -= weight
            total_value += value
        else:
            # Take the fraction of the item that fits
            total_value += ratio * capacity
            break

    return total_value

# Example usage
weights = [2, 3, 5, 7]
values = [10, 5, 15, 7]
capacity = 8

max_value = fractional_knapsack(weights, values, capacity)
print("Maximum value the treasure hunter can carry:", max_value)


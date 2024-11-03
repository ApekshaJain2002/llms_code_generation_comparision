def fractional_knapsack(weights, values, capacity):
    # Calculate the value-to-weight ratio for each item and store them as tuples
    items = [(values[i] / weights[i], weights[i], values[i]) for i in range(len(weights))]
    
    # Sort items by their value-to-weight ratio in descending order
    items.sort(reverse=True, key=lambda x: x[0])

    total_value = 0.0  # To keep track of the total value of items in the knapsack
    for ratio, weight, value in items:
        if capacity >= weight:
            # If the entire item can fit in the knapsack, take it whole
            total_value += value
            capacity -= weight
        else:
            # Take the fraction of the remaining capacity
            total_value += ratio * capacity
            break  # Knapsack is full, break out of the loop

    return total_value

# Example usage
weights = [10, 20, 30]
values = [60, 100, 120]
capacity = 50
print(f"Maximum value in the knapsack: {fractional_knapsack(weights, values, capacity)}")


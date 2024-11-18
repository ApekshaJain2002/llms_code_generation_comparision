def climb_stairs(n):
    if n == 0 or n == 1:
        return 1

    # Initialize base cases
    ways = [0] * (n + 1)
    ways[0] = 1
    ways[1] = 1

    # Fill the array using the recurrence relation
    for i in range(2, n + 1):
        ways[i] = ways[i - 1] + ways[i - 2]

    return ways[n]

# Example usage
n = 4
print(f"Number of ways to reach the {n}th stair:", climb_stairs(n))


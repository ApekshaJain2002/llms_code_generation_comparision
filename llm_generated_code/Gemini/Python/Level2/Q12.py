def climb_stairs(n):
    """
    Calculates the number of ways to climb n stairs.

    Args:
        n: The number of stairs.

    Returns:
        The number of distinct ways to climb the stairs.
    """

    if n <= 1:
        return 1

    dp = [0] * (n + 1)
    dp[0] = 1
    dp[1] = 1

    for i in range(2, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]

    return dp[n]

# Example usage:
n = 4
result = climb_stairs(n)
print("Number of ways to climb:", result)  # Output: 5

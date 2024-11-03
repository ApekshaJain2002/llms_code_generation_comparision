def climb_stairs(n):
    # Base cases
    if n == 0 or n == 1:
        return 1
    
    # Initialize the base values for the first two steps
    first, second = 1, 1
    
    # Calculate the number of ways iteratively
    for i in range(2, n + 1):
        current = first + second
        first = second
        second = current

    return second


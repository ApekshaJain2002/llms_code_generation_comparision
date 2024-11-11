def count_liars(claims):
    """
    Counts the number of liars in a group based on their claims.

    Args:
        claims: A list of integers, where the i-th integer represents the claim of the i-th person.

    Returns:
        The number of liars, or -1 if the claims are contradictory.
    """

    n = len(claims)

    # Check for trivial cases
    for claim in claims:
        if claim == 0:
            return 0
        if claim == n:
            return n - 1

    # Iterate through possible number of liars
    for x in range(1, n):
        liar_count = 0
        for claim in claims:
            if claim >= x:
                liar_count += 1
        if liar_count == x:
            return x

    # If no consistent solution is found, the claims are contradictory
    return -1

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        n = int(input())
        claims = list(map(int, input().split()))

        liars = count_liars(claims)
        if liars == -1:
            print("impossible")
        else:
            print(liars)

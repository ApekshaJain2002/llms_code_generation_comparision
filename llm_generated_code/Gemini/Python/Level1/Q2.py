def min_operations(a):
    """
    Calculates the minimum number of operations to make all elements of the array have the same parity.

    Args:
        a: A list of positive integers.

    Returns:
        The minimum number of operations.
    """

    even_count = sum(1 for num in a if num % 2 == 0)
    odd_count = len(a) - even_count

    target_parity = 0 if even_count > odd_count else 1

    operations = 0
    while True:
        min_opposite_parity = float('inf')
        min_target_parity = float('inf')
        opposite_parity_index = -1
        target_parity_index = -1

        for i, num in enumerate(a):
            if num % 2 != target_parity:
                if num < min_opposite_parity:
                    min_opposite_parity = num
                    opposite_parity_index = i
            else:
                if num < min_target_parity:
                    min_target_parity = num
                    target_parity_index = i

        if opposite_parity_index == -1 or target_parity_index == -1:
            break

        a[opposite_parity_index] += a[target_parity_index]
        operations += 1

    return operations

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        result = min_operations(a)
        print(result)

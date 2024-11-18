def is_large_number(num):
    """
    Checks if a number is a large number (all digits between 5 and 9).

    Args:
        num: The number to check.

    Returns:
        True if the number is large, False otherwise.
    """

    while num > 0:
        digit = num % 10
        if digit < 5 or digit > 9:
            return False
        num //= 10
    return True

def can_be_sum_of_large_numbers(x):
    """
    Checks if a number can be expressed as the sum of two large numbers with the same number of digits.

    Args:
        x: The number to check.

    Returns:
        True if x can be expressed as the sum, False otherwise.
    """

    num_digits = len(str(x))

    # If the first digit is less than 10, it's impossible.
    if x // 10**(num_digits - 1) < 10:
        return False

    # If the last digit is greater than 9, it's impossible.
    return x % 10 <= 9

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        x = int(input())
        if can_be_sum_of_large_numbers(x):
            print("Yes")
        else:
            print("No")

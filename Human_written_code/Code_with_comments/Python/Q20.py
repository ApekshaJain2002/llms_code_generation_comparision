def myPow(x: float, n: int) -> float:
    ans = 1.0
    nn = n
    if nn < 0:
        nn = -nn  # Handle negative exponent by converting it to positive

    while nn:
        if nn % 2:
            ans *= x  # If odd, multiply result by x
            nn -= 1
        else:
            x *= x  # Square the base
            nn //= 2  # Divide the exponent by 2

    if n < 0:
        ans = 1.0 / ans  # Invert the result for negative exponent

    return ans

if __name__ == "__main__":
    print(myPow(2, 10))  # Example usage

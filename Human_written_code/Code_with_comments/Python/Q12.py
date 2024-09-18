def main():
    n = 3  # The position in the Fibonacci sequence to calculate
    prev2 = 1  # Fibonacci number at position n-2
    prev = 1    # Fibonacci number at position n-1

    # Compute the Fibonacci number at position n
    for i in range(2, n+1):
        cur_i = prev2 + prev  # Current Fibonacci number
        prev2 = prev          # Update prev2 to the previous value
        prev = cur_i          # Update prev to the current value

    print(prev)  # Output the Fibonacci number at position n

if __name__ == "__main__":
    main()

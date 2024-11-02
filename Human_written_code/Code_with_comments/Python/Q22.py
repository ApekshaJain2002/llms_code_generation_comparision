def solve():
    # Read four integers a, b, c, d from input
    a, b, c, d = map(int, input().split())
    
    # Calculate x as the product of a and d
    x = a * d
    # Calculate y as the product of b and c
    y = b * c

    # Check if x and y are equal, meaning the fractions are equivalent
    if x == y:
        print(0)  # Output 0 if the two fractions are already equal
    # Check if one value is a multiple of the other
    elif (y != 0 and x % y == 0) or (x != 0 and y % x == 0):
        print(1)  # Output 1 if one multiplication will make them equal
    else:
        print(2)  # Output 2 if at least two steps are needed to make them equal

def main():
    # Read the number of test cases
    T = int(input())
    # Execute the solve function for each test case
    for _ in range(T):
        solve()

# Entry point of the script
if __name__ == "__main__":
    main()

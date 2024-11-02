t = int(input())  # Read the number of test cases

for _ in range(t):
    a, b = map(int, input().split())  # Read two integers
    # Check if the sum of a and b is even or odd
    if (a + b) % 2 == 0:
        print("Bob")  # Print "Bob" if sum is even
    else:
        print("Alice")  # Print "Alice" if sum is odd

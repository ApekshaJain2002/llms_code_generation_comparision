def main():
    # Read the number of test cases
    t = int(input().strip())
    
    # Loop through each test case
    for _ in range(t):
        # Read two integers a and b
        a, b = map(int, input().split())
        
        # Check if the sum of a and b is even
        if (a + b) % 2 == 0:
            print("Bob")
        else:
            print("Alice")

if __name__ == "__main__":
    main()

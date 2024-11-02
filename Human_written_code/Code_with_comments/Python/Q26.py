import sys
input = sys.stdin.read

def main():
    # Read all input data at once
    data = input().split()
    
    # Number of test cases
    t = int(data[0])
    idx = 1  # Start index for reading the array size and elements for each test case
    
    results = []  # List to store results for each test case
    
    # Iterate through each test case
    for _ in range(t):
        # Read the number of elements in the current test case
        n = int(data[idx])
        idx += 1
        
        # Read the array elements and convert them to integers
        a = list(map(int, data[idx:idx + n]))
        idx += n  # Move index to the next test case's data
        
        # Sort the array to easily find minimum differences between elements
        a.sort()
        
        # Initialize answer to a large number
        ans = float('inf')
        
        # Loop from the third element to the last to find the minimum difference
        # between every third consecutive element
        for i in range(2, n):
            # Calculate the difference between current element and two elements back
            ans = min(ans, a[i] - a[i - 2])
        
        # Append the result for the current test case to the results list
        results.append(ans)
    
    # Print all results, one per line
    print("\n".join(map(str, results)))

if __name__ == "__main__":
    main()

def countWays(m, n):
    # Initialize a previous row to store intermediate results.
    prev = [0] * n

    # Loop through each row of the grid.
    for i in range(m):
        # Initialize a temporary row to store current row results.
        temp = [0] * n
        
        # Loop through each column of the grid.
        for j in range(n):
            # Base case: If we are at the top-left corner, there is one way to reach it.
            if i == 0 and j == 0:
                temp[j] = 1
                continue
            
            # Initialize variables to store the number of ways from above and from the left.
            up = 0
            left = 0
            
            # Check if moving up is a valid option (not out of bounds).
            if i > 0:
                up = prev[j]
            
            # Check if moving left is a valid option (not out of bounds).
            if j > 0:
                left = temp[j - 1]
                
            # Calculate and store the number of ways to reach the current cell.
            temp[j] = up + left
        
        # Update the previous row with the current row results.
        prev = temp
    
    # The last element in the previous row (prev) now contains the total number of ways to reach the destination.
    return prev[n - 1]

def main():
    m = 3
    n = 2
    # Call the countWays function to calculate and print the number of ways to reach the destination.
    print(countWays(m, n))

if __name__ == '__main__':
    main()
# Read input values from standard input
def main():
    # Number of vectors
    n = int(input().strip())
    
    # Initialize lists to store x, y, z coordinates
    x = []
    y = []
    z = []
    
    # Read each vector's coordinates
    for _ in range(n):
        xi, yi, zi = map(int, input().split())
        x.append(xi)
        y.append(yi)
        z.append(zi)
    
    # Calculate the sum of each coordinate axis
    sum1 = sum(x)
    sum2 = sum(y)
    sum3 = sum(z)
    
    # Check if all sums are zero
    if sum1 == 0 and sum2 == 0 and sum3 == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()

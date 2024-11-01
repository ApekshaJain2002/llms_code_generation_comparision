import sys
input = sys.stdin.read

def main():
    data = input().split()
    index = 0
    Tc = int(data[index])
    index += 1
    
    results = []
    for _ in range(Tc):
        n = int(data[index])
        index += 1
        v = list(map(int, data[index:index + n]))
        index += n
        
        # Sort the array
        v.sort()
        
        # Initialize minimum with a large number
        mn = float('inf')
        
        # Calculate the minimum difference
        for i in range(1, n - 1):
            k = ((v[i + 1] - v[i]) + (v[i] - v[i - 1]))
            mn = min(mn, k)
        
        results.append(str(mn))
    
    # Output all results at once
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    main()

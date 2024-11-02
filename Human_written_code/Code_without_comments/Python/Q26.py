import sys
input = sys.stdin.read

def main():
    data = input().split()
    t = int(data[0])
    idx = 1
    
    results = []
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        a = list(map(int, data[idx:idx + n]))
        idx += n
        
        a.sort()
        ans = float('inf')
        
        for i in range(2, n):
            ans = min(ans, a[i] - a[i - 2])
        
        results.append(ans)
    
    print("\n".join(map(str, results)))

if __name__ == "__main__":
    main()

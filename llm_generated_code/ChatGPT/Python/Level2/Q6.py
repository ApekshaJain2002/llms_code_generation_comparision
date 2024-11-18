def find_liars(claims):
    n = len(claims)
    
    # Sort the claims
    claims.sort()
    
    for liars in range(n + 1):
        count = sum(1 for claim in claims if claim >= liars)
        if count == liars:
            return liars
    
    return -1  # Contradiction

def main():
    t = int(input())
    results = []
    
    for _ in range(t):
        n = int(input())
        claims = list(map(int, input().split()))
        result = find_liars(claims)
        results.append(result)
    
    for result in results:
        if result == -1:
            print("Contradiction")
        else:
            print(result)

if __name__ == "__main__":
    main()

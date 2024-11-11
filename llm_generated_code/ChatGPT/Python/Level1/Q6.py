def find_liars(claims):
    n = len(claims)
    
    # Sort the claims
    claims.sort()

    for liars in range(n + 1):
        count = 0
        for claim in claims:
            if claim >= liars:
                count += 1
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
        if result != -1:
            results.append(result)
        else:
            results.append("Contradiction")
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()

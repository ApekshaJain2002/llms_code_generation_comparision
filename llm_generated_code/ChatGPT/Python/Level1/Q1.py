def max_earnings(n, m, brands, prices):
    from collections import defaultdict
    import heapq

    # Create a dictionary to store the prices of each brand
    brand_prices = defaultdict(list)
    for i in range(m):
        brand_prices[brands[i]].append(prices[i])
    
    # Create a list to store the total earnings for each brand
    max_brand_earnings = []
    for bp in brand_prices.values():
        heapq.heapify(bp)
        max_brand_earnings.append(sum(bp))
    
    # Sort the brand earnings in descending order
    max_brand_earnings.sort(reverse=True)
    
    # Select the top n brands to maximize earnings
    max_earnings = sum(max_brand_earnings[:n])
    
    return max_earnings

def main():
    t = int(input())
    results = []
    for _ in range(t):
        n, m = map(int, input().split())
        brands = []
        prices = []
        for _ in range(m):
            bi, ci = map(int, input().split())
            brands.append(bi)
            prices.append(ci)
        
        result = max_earnings(n, m, brands, prices)
        results.append(result)
    
    for res in results:
        print(res)

if __name__ == "__main__":
    main()

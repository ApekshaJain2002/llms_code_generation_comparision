def max_revenue(n, brands, prices):
    brand_revenue = {}
    for i in range(len(brands)):
        if brands[i] in brand_revenue:
            brand_revenue[brands[i]] += prices[i]
        else:
            brand_revenue[brands[i]] = prices[i]

    revenues = sorted(brand_revenue.values(), reverse=True)

    max_earnings = sum(revenues[:n])

    return max_earnings

def main():
    t = int(input().strip())
    results = []
    for _ in range(t):
        m, n = map(int, input().strip().split())
        brands = []
        prices = []
        for _ in range(m):
            b, c = map(int, input().strip().split())
            brands.append(b)
            prices.append(c)
        results.append(max_revenue(n, brands, prices))
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()

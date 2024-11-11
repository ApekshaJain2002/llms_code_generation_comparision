def max_earnings(n, k, brands, costs):
    from collections import defaultdict
    
    brand_cost_map = defaultdict(list)
    
    # Group the costs by their brand
    for i in range(k):
        brand_cost_map[brands[i]].append(costs[i])
    
    max_earnings = []
    
    # Find the total cost for each brand and sort
    for cost_list in brand_cost_map.values():
        brand_total = sum(cost_list)
        max_earnings.append(brand_total)
    
    # Sort earnings in descending order
    max_earnings.sort(reverse=True)
    
    # Take the top 'n' earnings
    total_earnings = sum(max_earnings[:n])
    
    return total_earnings

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        brands = list(map(int, input().split()))
        costs = list(map(int, input().split()))
        
        print(max_earnings(n, k, brands, costs))

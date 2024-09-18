def maxProfit(arr):
    maxPro = 0          # Initialize maximum profit
    minPrice = float('inf')  # Set initial minimum price to infinity

    for i in range(len(arr)):
        minPrice = min(minPrice, arr[i])  # Update minimum price if a lower price is found
        maxPro = max(maxPro, arr[i] - minPrice)  # Calculate max profit if sold at current price

    return maxPro  # Return the maximum profit

arr = [7, 1, 5, 3, 6, 4]
maxPro = maxProfit(arr)
print("Max profit is:", maxPro)

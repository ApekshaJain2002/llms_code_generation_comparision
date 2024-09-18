class Item:
    def __init__(self, value: int, weight: int):
        self.value = value   # Value of the item
        self.weight = weight # Weight of the item

class Solution:
    def fractionalKnapsack(self, W: int, arr: List[Item], n: int) -> float:
        # Sort items based on their value-to-weight ratio in descending order
        arr.sort(key=lambda x: x.value / x.weight, reverse=True)
        
        curWeight = 0        # Current weight in the knapsack
        finalValue = 0.0     # Final value of the knapsack
        
        # Iterate through the sorted items
        for i in range(n):
            # If adding the full item does not exceed the capacity
            if curWeight + arr[i].weight <= W:
                curWeight += arr[i].weight  # Add item's weight
                finalValue += arr[i].value  # Add item's value
            else:
                # If adding the full item exceeds the capacity, add fraction of it
                remain = W - curWeight  # Calculate remaining capacity
                finalValue += arr[i].value / arr[i].weight * remain  # Add fractional value
                break  # Knapsack is now full
        
        return finalValue  # Return the maximum value that can be obtained

if __name__ == '__main__':
    n = 3  # Number of items
    W = 50 # Capacity of the knapsack
    # List of items with their value and weight
    arr = [Item(60, 10), Item(100, 20), Item(120, 30)]
    
    obj = Solution()
    ans = obj.fractionalKnapsack(W, arr, n)
    
    print("The maximum value is", ans)  # Print the maximum value

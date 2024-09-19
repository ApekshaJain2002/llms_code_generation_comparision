class Item:
    def __init__(self, value: int, weight: int):
        self.value = value   
        self.weight = weight 
class Solution:
    def fractionalKnapsack(self, W: int, arr: List[Item], n: int) -> float:
        arr.sort(key=lambda x: x.value / x.weight, reverse=True)
        curWeight = 0        
        finalValue = 0.0     
        for i in range(n):
            if curWeight + arr[i].weight <= W:
                curWeight += arr[i].weight  
                finalValue += arr[i].value  
            else:
                remain = W - curWeight  
                finalValue += arr[i].value / arr[i].weight * remain  
                break  
        return finalValue  
if __name__ == '__main__':
    n = 3  
    W = 50 
    arr = [Item(60, 10), Item(100, 20), Item(120, 30)]
    obj = Solution()
    ans = obj.fractionalKnapsack(W, arr, n)
    print("The maximum value is", ans)

def solve(arr):
    n = len(arr)
    prev = arr[0]  
    prev2 = 0      
    for i in range(1, n):
        pick = arr[i] + (prev2 if i > 1 else 0)  
        nonPick = prev  
        cur_i = max(pick, nonPick)  
        prev2 = prev  
        prev = cur_i  
    return prev
def robStreet(n, arr):
    arr1 = arr[:-1]  
    arr2 = arr[1:]   
    if n == 1:
        return arr[0]
    ans1 = solve(arr1)
    ans2 = solve(arr2)
    return max(ans1, ans2)
def main():
    arr = [1, 5, 1, 2, 6]
    n = len(arr)
    print(robStreet(n, arr))
if __name__ == '__main__':
    main()

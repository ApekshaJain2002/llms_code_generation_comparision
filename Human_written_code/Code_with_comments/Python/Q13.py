def solve(arr):
    n = len(arr)
    prev = arr[0]  # Maximum money when including the first house
    prev2 = 0      # Maximum money when excluding the previous house

    for i in range(1, n):
        pick = arr[i] + (prev2 if i > 1 else 0)  # Max money if including the current house
        nonPick = prev  # Max money if excluding the current house
        
        cur_i = max(pick, nonPick)  # Max money for the current state
        prev2 = prev  # Update previous max money
        prev = cur_i  # Update current max money

    return prev

def robStreet(n, arr):
    arr1 = arr[:-1]  # Exclude the last house
    arr2 = arr[1:]   # Exclude the first house

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

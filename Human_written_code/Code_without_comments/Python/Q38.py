from sortedcontainers import SortedList
def maxSlidingWindow(arr, k):
    ans = []
    window = SortedList()
    for i in range(k):
        window.add((-arr[i], i))  
    ans.append(-window[0][0])
    for i in range(k, len(arr)):
        window.add((-arr[i], i))
        if i - k >= 0:
            window.remove((-arr[i - k], i - k))
        ans.append(-window[0][0])
    return ans
arr = [2, 3, 7, 9, 5, 1, 6, 4, 3]
k = 3
result = maxSlidingWindow(arr, k)
print(result)

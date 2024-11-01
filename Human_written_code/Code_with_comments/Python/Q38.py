from sortedcontainers import SortedList

def maxSlidingWindow(arr, k):
    ans = []
    window = SortedList()

    # Initialize the window with the first k elements
    for i in range(k):
        window.add((-arr[i], i))  # Use negative value for max-heap behavior

    # The maximum element in the first window
    ans.append(-window[0][0])

    # Process the remaining elements
    for i in range(k, len(arr)):
        window.add((-arr[i], i))
        # Remove the element that is out of the window
        if i - k >= 0:
            window.remove((-arr[i - k], i - k))
        # The maximum element in the current window
        ans.append(-window[0][0])

    return ans

# Example usage:
arr = [2, 3, 7, 9, 5, 1, 6, 4, 3]
k = 3
result = maxSlidingWindow(arr, k)
print(result) 

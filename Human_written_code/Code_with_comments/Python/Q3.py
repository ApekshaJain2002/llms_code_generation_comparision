def sortArray(arr):
    low = 0
    mid = 0
    high = len(arr) - 1

    while mid <= high:
        if arr[mid] == 0:
            # Swap 0 to the low end
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            # Move past 1
            mid += 1
        else:
            # Swap 2 to the high end
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1

n = 6
arr = [0, 2, 1, 2, 0, 1]
sortArray(arr)
print("After sorting:")
for num in arr:
    print(num, end=" ")
print()

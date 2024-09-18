def findLargestElement(arr, n):
    # Initialize max to the first element of the array
    max = arr[0]
    
    # Iterate through the array to find the largest element
    for i in range(n):
        if max < arr[i]:
            max = arr[i]  # Update max if a larger element is found
    
    return max  # Return the largest element

if __name__ == "__main__":
    arr1 = [2, 5, 1, 3, 0]
    n = 5
    max = findLargestElement(arr1, n)
    print("The largest element in the array is:", max)

    arr2 = [8, 10, 5, 7, 9]
    n = 5
    max = findLargestElement(arr2, n)
    print("The largest element in the array is:", max)

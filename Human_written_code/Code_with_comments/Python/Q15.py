def Frequency(arr, n):
    mp = {}
    # Count frequency of each element
    for i in range(n):
        if arr[i] in mp:
            mp[arr[i]] += 1
        else:
            mp[arr[i]] = 1
    # Print each element and its frequency
    for x in mp:
        print(x, mp[x])

if __name__ == '__main__':
    arr = [10, 5, 10, 15, 10, 5]
    n = len(arr)
    Frequency(arr, n)

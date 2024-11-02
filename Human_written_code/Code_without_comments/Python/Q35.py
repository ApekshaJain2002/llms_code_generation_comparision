def longest_increasing_subsequence_length(arr):
    n = len(arr)
    temp = [arr[0]]
    length = 1
    for i in range(1, n):
        if arr[i] > temp[-1]:
            temp.append(arr[i])
            length += 1
        else:
            ind = bisect_left(temp, arr[i])
            temp[ind] = arr[i]
    return length
if __name__ == "__main__":
    arr = [10, 9, 2, 5, 3, 7, 101, 18]
    result = longest_increasing_subsequence_length(arr)
    print("The length of the longest increasing subsequence is", result)

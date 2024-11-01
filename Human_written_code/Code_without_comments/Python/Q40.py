from typing import List
def nextGreaterPermutation(A: List[int]) -> List[int]:
    n = len(A) 
    ind = -1 
    for i in range(n-2, -1, -1):
        if A[i] < A[i + 1]:
            ind = i
            break
    if ind == -1:
        A.reverse()
        return A
    for i in range(n - 1, ind, -1):
        if A[i] > A[ind]:
            A[i], A[ind] = A[ind], A[i]
            break
    A[ind+1:] = reversed(A[ind+1:])
    return A
if __name__ == "__main__":
    A = [2, 1, 5, 4, 3, 0, 0]
    ans = nextGreaterPermutation(A)
    print("The next permutation is: [", end="")
    for it in ans:
        print(it, end=" ")
    print("]")

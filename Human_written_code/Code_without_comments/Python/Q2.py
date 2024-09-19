def moveZeros(n: int,  a: [int]) -> [int]:
    j = -1
    for i in range(n):
        if a[i] == 0:
            j = i
            break
    if j == -1:
        return a
    for i in range(j + 1, n):
        if a[i] != 0:
            a[i], a[j] = a[j], a[i]
            j += 1
    return a
arr = [1, 0, 2, 3, 2, 0, 0, 4, 5, 1]
n = 10
ans = moveZeros(n, arr)
for it in ans:
    print(it, end=' ')
print()

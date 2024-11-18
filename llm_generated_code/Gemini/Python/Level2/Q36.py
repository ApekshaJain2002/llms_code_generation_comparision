<<<<<<< HEAD
def length_of_longest_substring(s):
    char_index_map = {}
    max_len = 0
    start = 0

    for end in range(len(s)):
        if s[end] in char_index_map:
            start = max(start, char_index_map[s[end]] + 1)
        char_index_map[s[end]] = end
        max_len = max(max_len, end - start + 1)

    return max_len
=======
def min_operations(a):
    n = len(a)
    a.sort()
    return n - a.count(a[0]) - a.count(a[-1]) + 1

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(min_operations(a))
>>>>>>> 5c97457de138fe480f391df5982345a36a29fe2e

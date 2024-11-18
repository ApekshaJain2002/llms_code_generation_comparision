def min_operations_to_all_ones(s):
    if s.count("1") == 4:
        return 0
    elif s.count("0") == 4:
        return -1
    elif s.count("1") == 3:
        return 1
    elif s.count("1") == 2:
        return 2
    return 3

t = int(input())
results = []
for _ in range(t):
    s = input()
    results.append(str(min_operations_to_all_ones(s)))
print("\n".join(results))

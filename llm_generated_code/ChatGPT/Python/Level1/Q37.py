def min_cost_to_make_good(s):
    cost = 0
    i = 0
    while i < len(s):
        if i + 1 < len(s) and s[i] == s[i + 1]:
            cost += 1
            i += 2
        else:
            i += 1
    return cost

t = int(input())
results = []
for _ in range(t):
    s = input().strip()
    results.append(min_cost_to_make_good(s))

for result in results:
    print(result)

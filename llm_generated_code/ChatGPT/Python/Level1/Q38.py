def max_points(n, lamps):
    lamps.sort(key=lambda x: -x[1])
    points = 0
    on_count = 0
    for a, b in lamps:
        if on_count < a:
            points += b
            on_count += 1
    return points

t = int(input())
results = []
for _ in range(t):
    n = int(input())
    lamps = [tuple(map(int, input().split())) for _ in range(n)]
    results.append(max_points(n, lamps))

for result in results:
    print(result)

def max_power(lamps):
    lamps.sort(key=lambda x: x[1], reverse=True)  # Sort by b in descending order
    max_a = lamps[0][0]
    power = 0
    for i in range(len(lamps)):
        if lamps[i][0] <= max_a:
            power += lamps[i][1]
            max_a = min(max_a, lamps[i][0])
        else:
            break
    return power

t = int(input())
for _ in range(t):
    n = int(input())
    lamps = []
    for _ in range(n):
        a, b = map(int, input().split())
        lamps.append((a, b))
    print(max_power(lamps))

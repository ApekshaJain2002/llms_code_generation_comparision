def max_power(lamps):
    lamps.sort(key=lambda x: x[1], reverse=True)  

    max_a = lamps[0][0]
    total_power = 0
    for a, b in lamps:
        if a <= max_a:
            total_power += b
        else:
            break
    return total_power

for _ in range(int(input())):
    n = int(input())
    lamps = []
    for _ in range(n):
        a, b = map(int, input().split())
        lamps.append((a, b))
    print(max_power(lamps))

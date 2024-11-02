def min_trips(sequence):
    trips = 0
    i = 0
    while i < len(sequence):
        count = 1
        while i + 1 < len(sequence) and sequence[i] == sequence[i + 1]:
            count += 1
            i += 1
        trips += (count + 4) // 5
        i += 1
    return trips

sequence = input()
result = min_trips(sequence)
print(result)

def max_treasure_value(map_segments):
    max_sum = current_sum = map_segments[0]
    for value in map_segments[1:]:
        current_sum = max(value, current_sum + value)
        max_sum = max(max_sum, current_sum)
    return max_sum

map_segments = [3, -2, 5, -1, 4, -3, 2, 1]
print(max_treasure_value(map_segments))

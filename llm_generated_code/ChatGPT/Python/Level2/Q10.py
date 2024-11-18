from collections import deque

def min_time_to_rot(grid):
    rows, cols = len(grid), len(grid[0])
    queue = deque()
    fresh_count = 0

    # Initialize the queue with positions of all rotten oranges and count fresh oranges
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 2:
                queue.append((r, c))
            elif grid[r][c] == 1:
                fresh_count += 1

    # If there are no fresh oranges, return 0
    if fresh_count == 0:
        return 0

    # Define directions for adjacent cells (up, down, left, right)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    minutes_passed = 0

    # Perform BFS to spread the rot to adjacent fresh oranges
    while queue and fresh_count > 0:
        minutes_passed += 1
        for _ in range(len(queue)):
            x, y = queue.popleft()
            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                # Rot adjacent fresh orange if within bounds
                if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] == 1:
                    grid[nx][ny] = 2
                    fresh_count -= 1
                    queue.append((nx, ny))

    # Check if any fresh oranges remain
    return minutes_passed if fresh_count == 0 else -1

# Example usage
grid = [
    [2, 1, 1],
    [1, 1, 0],
    [0, 1, 1]
]

result = min_time_to_rot(grid)
print("Minimum time required for all oranges to rot:", result)


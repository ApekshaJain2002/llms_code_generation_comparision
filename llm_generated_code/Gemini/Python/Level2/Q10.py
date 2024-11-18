from collections import deque

def orangesRotting(grid):
    rows, cols = len(grid), len(grid[0])
    queue = deque()
    days = [[0] * cols for _ in range(rows)]

    # Enqueue initial rotten oranges
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 2:
                queue.append((i, j))
                days[i][j] = 0

    # BFS to spread rottenness
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    max_days = 0
    while queue:
        x, y = queue.popleft()
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] == 1:
                grid[nx][ny] = 2
                days[nx][ny] = days[x][y] + 1
                max_days = max(max_days, days[nx][ny])

    # Check for remaining fresh oranges
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                return -1

    return max_days

# Example usage:
grid = [[2,1,1], [1,1,0], [0,1,1]]
result = orangesRotting(grid)
print(result)  # Output: 2

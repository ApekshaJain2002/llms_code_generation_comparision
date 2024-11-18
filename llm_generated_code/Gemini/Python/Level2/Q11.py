
def numEnclaves(grid):
    rows, cols = len(grid), len(grid[0])
    visited = [[False] * cols for _ in range(rows)]

    def dfs(i, j):
        if i < 0 or i >= rows or j < 0 or j >= cols or grid[i][j] == 0 or visited[i][j]:
            return
        visited[i][j] = True
        dfs(i + 1, j)
        dfs(i - 1, j)
        dfs(i, j + 1)
        dfs(i, j - 1)

    # Mark border cells as visited
    for i in range(rows):
        for j in range(cols):
            if (i == 0 or i == rows - 1 or j == 0 or j == cols - 1) and grid[i][j] == 1:
                dfs(i, j)

    # Count surrounded land cells
    count = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1 and not visited[i][j]:
                count += 1
                dfs(i, j)  # Mark the surrounded land cell as visited

    return count

# Example usage:
grid = [[0,0,0,0],
        [0,1,1,0],
        [0,1,0,0],
        [0,0,0,0]]
result = numEnclaves(grid)
print(result)  # Output: 3

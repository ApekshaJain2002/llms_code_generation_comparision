def dfs_mark(grid, x, y, rows, cols):
    if x < 0 or x >= rows or y < 0 or y >= cols or grid[x][y] != 1:
        return
    # Mark this cell as visited by changing it to -1
    grid[x][y] = -1
    # Perform DFS in all 4 directions
    dfs_mark(grid, x - 1, y, rows, cols)  # Up
    dfs_mark(grid, x + 1, y, rows, cols)  # Down
    dfs_mark(grid, x, y - 1, rows, cols)  # Left
    dfs_mark(grid, x, y + 1, rows, cols)  # Right

def count_surrounded_land_cells(grid):
    rows, cols = len(grid), len(grid[0])

    # Mark all land cells connected to the boundary as non-surrounded
    for r in range(rows):
        for c in [0, cols - 1]:  # Only left and right boundaries
            if grid[r][c] == 1:
                dfs_mark(grid, r, c, rows, cols)
    for c in range(cols):
        for r in [0, rows - 1]:  # Only top and bottom boundaries
            if grid[r][c] == 1:
                dfs_mark(grid, r, c, rows, cols)

    # Count cells that are still 1 (completely surrounded land cells)
    surrounded_count = sum(1 for r in range(1, rows - 1) for c in range(1, cols - 1) if grid[r][c] == 1)

    return surrounded_count

# Example usage
archipelago_map = [
    [0, 0, 0, 0, 0],
    [0, 1, 1, 0, 0],
    [0, 1, 0, 1, 0],
    [0, 0, 1, 0, 0],
    [0, 0, 0, 0, 0]
]

surrounded_land_cells = count_surrounded_land_cells(archipelago_map)
print("Number of completely surrounded land cells:", surrounded_land_cells)


def num_enclosed_land_cells(grid):
    rows, cols = len(grid), len(grid[0])
    
    def dfs(r, c):
        # If out of bounds or sea cell, stop recursion
        if r < 0 or r >= rows or c < 0 or c >= cols or grid[r][c] != 1:
            return
        # Mark the cell as visited by setting it to a different value, e.g., -1
        grid[r][c] = -1
        
        # Explore in all four directions
        dfs(r + 1, c)
        dfs(r - 1, c)
        dfs(r, c + 1)
        dfs(r, c - 1)
    
    # Run DFS on all boundary land cells
    for i in range(rows):
        if grid[i][0] == 1:  # Left boundary
            dfs(i, 0)
        if grid[i][cols - 1] == 1:  # Right boundary
            dfs(i, cols - 1)
    for j in range(cols):
        if grid[0][j] == 1:  # Top boundary
            dfs(0, j)
        if grid[rows - 1][j] == 1:  # Bottom boundary
            dfs(rows - 1, j)
    
    # Count the remaining unvisited land cells
    enclosed_land_count = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                enclosed_land_count += 1
    
    return enclosed_land_count


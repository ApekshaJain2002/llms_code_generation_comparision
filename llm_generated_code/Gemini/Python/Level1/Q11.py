def num_enclaves(grid):
  """
  Finds the number of land cells where you cannot walk off the boundary.

  Args:
      grid: A list of lists representing the binary matrix.

  Returns:
      The number of land cells (enclaves)
  """

  rows, cols = len(grid), len(grid[0])
  directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]  # Up, down, right, left

  def dfs(row, col):
    # Depth-First Search to mark connected land cells as visited

    if 0 <= row < rows and 0 <= col < cols and grid[row][col] == 1:
      grid[row][col] = 0  # Mark visited
      for dr, dc in directions:
        dfs(row + dr, col + dc)

  # Check boundary cells for land
  for i in range(rows):
    dfs(i, 0)  # Check first column
    dfs(i, cols - 1)  # Check last column

  for j in range(cols):
    dfs(0, j)  # Check first row
    dfs(rows - 1, j)  # Check last row

  # Count remaining land cells (enclaves)
  enclave_count = 0
  for i in range(rows):
    for j in range(cols):
      if grid[i][j] == 1:
        enclave_count += 1

  return enclave_count

# Example usage
grid = [[0, 0, 0, 0], [1, 0, 1, 0], [0, 1, 1, 0], [0, 0, 0, 0]]
enclaves = num_enclaves(grid)
print("Number of enclaves:", enclaves)

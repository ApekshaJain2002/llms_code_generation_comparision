from collections import deque

def min_decay_time(grid):
  """
  Finds the minimum number of minutes required to decay all healthy elements.

  Args:
      grid: A list of lists representing the grid. (2D array)

  Returns:
      The minimum number of minutes required, or -1 if not possible.
  """

  rows, cols = len(grid), len(grid[0])
  directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]  # Up, down, right, left

  # Find all healthy elements and decayed elements
  healthy_elements = []
  decayed_elements = []
  for i in range(rows):
    for j in range(cols):
      if grid[i][j] == 1:
        healthy_elements.append((i, j))
      elif grid[i][j] == 2:
        decayed_elements.append((i, j))

  # Check for initial invalid cases
  if not healthy_elements or not decayed_elements:
    return 0 if not healthy_elements else -1  # All healthy or all decayed

  # Perform BFS from decayed elements
  queue = deque(decayed_elements)
  minutes = 0
  visited = set()

  while queue:
    for _ in range(len(queue)):
      row, col = queue.popleft()
      if (row, col) in visited:
        continue  # Already processed

      visited.add((row, col))
      for dr, dc in directions:
        new_row, new_col = row + dr, col + dc
        if 0 <= new_row < rows and 0 <= new_col < cols and grid[new_row][new_col] == 1:
          grid[new_row][new_col] = 2  # Mark healthy as decayed
          queue.append((new_row, new_col))

    minutes += 1  # Increment minute after processing all elements in current level

  # Check if all healthy elements are decayed
  for row, col in healthy_elements:
    if grid[row][col] != 2:
      return -1  # Not all healthy elements decayed

  return minutes

# Example usage
grid = [[0, 2, 1, 0], [0, 0, 0, 1], [0, 1, 0, 0]]
minutes = min_decay_time(grid)
print("Minimum minutes required:", minutes)

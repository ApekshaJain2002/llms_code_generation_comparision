
from collections import deque

def min_minutes_to_decay(grid):
    rows, cols = len(grid), len(grid[0])
    queue = deque()
    fresh_count = 0  # Count of healthy elements
    minutes = 0

    # Initialize the queue with all decayed elements and count healthy elements
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 2:
                queue.append((r, c))  # Add all initially decayed elements
            elif grid[r][c] == 1:
                fresh_count += 1  # Count all healthy elements

    # Directions array for moving in 4 possible directions
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    # BFS to spread decay
    while queue and fresh_count > 0:
        # Process all elements in the current level
        for _ in range(len(queue)):
            r, c = queue.popleft()
            for dr, dc in directions:
                nr, nc = r + dr, c + dc
                # If the adjacent cell is healthy, decay it and add it to the queue
                if 0 <= nr < rows and 0 <= nc < cols and grid[nr][nc] == 1:
                    grid[nr][nc] = 2  # Decay the element
                    fresh_count -= 1
                    queue.append((nr, nc))
        minutes += 1

    # If there are any remaining healthy elements, return -1, otherwise return minutes
    return minutes if fresh_count == 0 else -1

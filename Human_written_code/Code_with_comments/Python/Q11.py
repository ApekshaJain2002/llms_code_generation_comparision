from typing import List
from collections import deque

class Solution:
    def numberOfEnclaves(self, grid: List[List[int]]) -> int:
        q = deque()  # Queue for BFS
        n = len(grid)  # Number of rows
        m = len(grid[0])  # Number of columns
        vis = [[0] * m for _ in range(n)]  # Visited matrix
        
        # Traverse boundary elements
        for i in range(n):
            for j in range(m):
                # First row, first col, last row, last col
                if i == 0 or j == 0 or i == n - 1 or j == m - 1:
                    # If it is land (1), store it in the queue
                    if grid[i][j] == 1:
                        q.append((i, j))
                        vis[i][j] = 1
        
        # Directions for moving in the grid
        delrow = [-1, 0, 1, 0]
        delcol = [0, 1, 0, -1]
        
        # Perform BFS
        while q:
            row, col = q.popleft()
            # Traverse all 4 directions
            for i in range(4):
                nrow, ncol = row + delrow[i], col + delcol[i]
                # Check for valid coordinates and for land cell
                if 0 <= nrow < n and 0 <= ncol < m and not vis[nrow][ncol] and grid[nrow][ncol] == 1:
                    q.append((nrow, ncol))
                    vis[nrow][ncol] = 1
        
        # Count the number of unvisited land cells
        cnt = 0
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1 and vis[i][j] == 0:
                    cnt += 1
        
        return cnt

if __name__ == '__main__':
    grid = [
        [0, 0, 0, 0],
        [1, 0, 1, 0],
        [0, 1, 1, 0],
        [0, 0, 0, 0]
    ]
    obj = Solution()
    print(obj.numberOfEnclaves(grid))

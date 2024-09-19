from typing import List
from collections import deque
class Solution:
    def numberOfEnclaves(self, grid: List[List[int]]) -> int:
        q = deque()  
        n = len(grid)  
        m = len(grid[0])  
        vis = [[0] * m for _ in range(n)]  
        for i in range(n):
            for j in range(m):
                if i == 0 or j == 0 or i == n - 1 or j == m - 1:
                    if grid[i][j] == 1:
                        q.append((i, j))
                        vis[i][j] = 1
        delrow = [-1, 0, 1, 0]
        delcol = [0, 1, 0, -1]
        while q:
            row, col = q.popleft()
            for i in range(4):
                nrow, ncol = row + delrow[i], col + delcol[i]
                if 0 <= nrow < n and 0 <= ncol < m and not vis[nrow][ncol] and grid[nrow][ncol] == 1:
                    q.append((nrow, ncol))
                    vis[nrow][ncol] = 1
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

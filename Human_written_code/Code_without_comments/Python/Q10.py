from collections import deque
from typing import List
def orangesRotting(grid: List[List[int]]) -> int:
    if not grid:
        return 0
    m = len(grid)
    n = len(grid[0])
    days = 0
    tot = 0
    cnt = 0
    rotten = deque()
    for i in range(m):
        for j in range(n):
            if grid[i][j] != 0:
                tot += 1
            if grid[i][j] == 2:
                rotten.append((i, j))
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    while rotten:
        k = len(rotten)
        cnt += k
        for _ in range(k):
            x, y = rotten.popleft()
            for i in range(4):
                nx, ny = x + dx[i], y + dy[i]
                if 0 <= nx < m and 0 <= ny < n and grid[nx][ny] == 1:
                    grid[nx][ny] = 2
                    rotten.append((nx, ny))
        if rotten:
            days += 1
    return days if tot == cnt else -1
if __name__ == '__main__':
    v = [[2,1,1], [1,1,0], [0,1,1]]
    rotting = orangesRotting(v)
    print("Minimum Number of Minutes Required:", rotting)

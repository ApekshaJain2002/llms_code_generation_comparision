#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    queue<pair<int, int>> rotten;
    vector<vector<int>> days(m, vector<int>(n, -1));

    // Find initial rotten oranges and add to queue
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 2) {
                rotten.push({i, j});
                days[i][j] = 0;
            }
        }
    }

    // BFS to spread rottenness
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    int maxDays = 0;
    while (!rotten.empty()) {
        int x = rotten.front().first;
        int y = rotten.front().second;
        rotten.pop();

        for (int i = 0; i < 4; ++i) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newX < m && newY >= 0 && newY < n && grid[newX][newY] == 1) {
                grid[newX][newY] = 2;
                days[newX][newY] = days[x][y] + 1;
                maxDays = max(maxDays, days[newX][newY]);
                rotten.push({newX, newY});
            }
        }
    }

    // Check if all oranges have rotten
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }

    return maxDays;
}

int main() {
    vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    int minTime = orangesRotting(grid);
    cout << "Minimum time to rot all oranges: " << minTime << endl;

    return 0;
}

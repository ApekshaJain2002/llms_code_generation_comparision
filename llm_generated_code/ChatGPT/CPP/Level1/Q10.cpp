
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Cell {
    int row, col, time;
};

int minDecayTime(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    queue<Cell> q;
    int healthyCount = 0;
    
    // Initialize the queue with all initially decayed elements and count healthy elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 2) {
                q.push({i, j, 0});
            } else if (grid[i][j] == 1) {
                healthyCount++;
            }
        }
    }

    // Directions for moving up, down, left, right
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int minutes = 0;

    // Perform BFS
    while (!q.empty()) {
        Cell cell = q.front();
        q.pop();
        int row = cell.row;
        int col = cell.col;
        int time = cell.time;
        minutes = max(minutes, time);

        // Spread decay to adjacent cells
        for (auto& dir : directions) {
            int newRow = row + dir.first;
            int newCol = col + dir.second;

            // Check if the new cell is within bounds and is healthy
            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && grid[newRow][newCol] == 1) {
                grid[newRow][newCol] = 2; // Decay the healthy element
                q.push({newRow, newCol, time + 1});
                healthyCount--; // Decrease the count of healthy elements
            }
        }
    }

    // If there are any healthy elements left, return -1, otherwise return the minutes
    return (healthyCount == 0) ? minutes : -1;
}

int main() {
    vector<vector<int>> grid = {
        {2, 1, 0, 2},
        {1, 0, 1, 2},
        {1, 1, 1, 0}
    };
    
    int result = minDecayTime(grid);
    if (result == -1) {
        cout << "It is not possible to decay all healthy elements." << endl;
    } else {
        cout << "Minimum number of minutes required to decay all healthy elements: " << result << endl;
    }
    
    return 0;
}

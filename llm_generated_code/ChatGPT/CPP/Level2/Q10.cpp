#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Position {
    int x, y;
};

bool isValid(int x, int y, int rows, int cols) {
    return (x >= 0 && y >= 0 && x < rows && y < cols);
}

int minTimeToRotAllOranges(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    queue<Position> rottenQueue;
    int freshOranges = 0;

    // Directions for adjacent cells (up, down, left, right)
    vector<Position> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // Initialize queue with all initial rotten oranges and count fresh oranges
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 2) {
                rottenQueue.push({i, j});
            } else if (grid[i][j] == 1) {
                freshOranges++;
            }
        }
    }

    if (freshOranges == 0) return 0;  // No fresh oranges to rot

    int minutes = 0;

    // BFS traversal
    while (!rottenQueue.empty()) {
        int size = rottenQueue.size();
        bool rottedThisMinute = false;

        for (int i = 0; i < size; i++) {
            Position pos = rottenQueue.front();
            rottenQueue.pop();

            for (Position dir : directions) {
                int newX = pos.x + dir.x;
                int newY = pos.y + dir.y;

                // If the adjacent cell has a fresh orange, rot it
                if (isValid(newX, newY, rows, cols) && grid[newX][newY] == 1) {
                    grid[newX][newY] = 2;  // Mark it as rotten
                    rottenQueue.push({newX, newY});
                    freshOranges--;
                    rottedThisMinute = true;
                }
            }
        }

        if (rottedThisMinute) minutes++;  // Increment minutes if at least one orange rotted
    }

    return (freshOranges == 0) ? minutes : -1;  // -1 if some fresh oranges can't be rotted
}

int main() {
    vector<vector<int>> grid = {
        {2, 1, 0, 2, 1},
        {1, 0, 1, 2, 1},
        {1, 0, 0, 2, 1}
    };

    int result = minTimeToRotAllOranges(grid);

    if (result == -1) {
        cout << "It is impossible to rot all fresh oranges." << endl;
    } else {
        cout << "Minimum time required to rot all fresh oranges: " << result << " minutes." << endl;
    }

    return 0;
}


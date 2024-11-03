#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& grid, int row, int col) {
    int m = grid.size();
    int n = grid[0].size();

    // Boundary check and check if it's land (1)
    if (row < 0 || row >= m || col < 0 || col >= n || grid[row][col] != 1) {
        return;
    }

    // Mark this cell as visited (changing 1 to 2)
    grid[row][col] = 2;

    // Explore in all four directions
    dfs(grid, row - 1, col);
    dfs(grid, row + 1, col);
    dfs(grid, row, col - 1);
    dfs(grid, row, col + 1);
}

int numEnclosedLandCells(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    // Step 1: Perform DFS on all boundary cells that are land (1)
    for (int i = 0; i < m; i++) {
        // Left boundary
        if (grid[i][0] == 1) {
            dfs(grid, i, 0);
        }
        // Right boundary
        if (grid[i][n - 1] == 1) {
            dfs(grid, i, n - 1);
        }
    }

    for (int j = 0; j < n; j++) {
        // Top boundary
        if (grid[0][j] == 1) {
            dfs(grid, 0, j);
        }
        // Bottom boundary
        if (grid[m - 1][j] == 1) {
            dfs(grid, m - 1, j);
        }
    }

    // Step 2: Count all remaining land cells (1s) that are not marked
    int enclosedLandCells = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                enclosedLandCells++;
            }
        }
    }

    return enclosedLandCells;
}

int main() {
    vector<vector<int>> grid = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int result = numEnclosedLandCells(grid);
    cout << "Number of enclosed land cells: " << result << endl;

    return 0;
}


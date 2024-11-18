#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited) {
    int m = grid.size(), n = grid[0].size();

    // Check if the cell is within bounds and is land
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 || visited[i][j]) {
        return;
    }

    visited[i][j] = true;

    // Recursively explore neighbors
    dfs(grid, i + 1, j, visited);
    dfs(grid, i - 1, j, visited);
    dfs(grid, i, j + 1, visited);
    dfs(grid, i, j - 1, visited);
}

int numEnclaves(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int count = 0;

    // Mark boundary land cells as visited to prevent DFS from exploring them
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                if (grid[i][j] == 1) {
                    dfs(grid, i, j, visited);
                }
            }
        }
    }

    // Count surrounded land cells
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int>> grid = {{0, 0, 0, 0}, {1, 1, 1, 1}, {0, 1, 1, 0}, {0, 0, 0, 0}};
    int numEnclaves = numEnclaves(grid);
    cout << "Number of enclosed land cells: " << numEnclaves << endl;

    return 0;
}

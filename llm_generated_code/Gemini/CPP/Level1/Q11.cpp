#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Cell {
  int row;
  int col;
};

int trappedLandCells(const vector<vector<int>>& grid) {
  int m = grid.size();
  int n = grid[0].size();

  int trappedCells = 0;
  vector<vector<bool>> visited(m, vector<bool>(n, false));

  // Perform DFS starting from land cells on the boundary
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 1 && (i == 0 || j == 0 || i == m - 1 || j == n - 1)) {
        dfs(grid, visited, i, j);
      }
    }
  }

  // Count unvisited land cells
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 1 && !visited[i][j]) {
        trappedCells++;
      }
    }
  }

  return trappedCells;
}

void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int row, int col) {
  visited[row][col] = true;

  int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  for (int i = 0; i < 4; ++i) {
    int newRow = row + directions[i][0];
    int newCol = col + directions[i][1];

    if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size() &&
        grid[newRow][newCol] == 1 && !visited[newRow][newCol]) {
      dfs(grid, visited, newRow, newCol);
    }
  }
}

int main() {
  vector<vector<int>> grid = {
    {0, 1, 0, 0},
    {1, 0, 0, 1},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
  };

  int trappedCells = trappedLandCells(grid);
  cout << "Number of trapped land cells: " << trappedCells << endl;

  return 0;
}

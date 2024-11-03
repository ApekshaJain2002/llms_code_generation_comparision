#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Cell {
  int row;
  int col;
};

int minTimeToDecay(const vector<vector<int>>& grid) {
  int m = grid.size();
  int n = grid[0].size();

  int minutes = 0;
  queue<Cell> decayedCells;

  // Find all initially decayed cells and add them to the queue
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 2) {
        decayedCells.push({i, j});
      }
    }
  }

  // Perform BFS to spread decay
  while (!decayedCells.empty()) {
    int queueSize = decayedCells.size();
    minutes++;

    for (int i = 0; i < queueSize; ++i) {
      Cell currCell = decayedCells.front();
      decayedCells.pop();

      int row = currCell.row;
      int col = currCell.col;

      // Check adjacent cells
      if (row - 1 >= 0 && grid[row - 1][col] == 1) {
        grid[row - 1][col] = 2;
        decayedCells.push({row - 1, col});
      }
      if (row + 1 < m && grid[row + 1][col] == 1) {
        grid[row + 1][col] = 2;
        decayedCells.push({row + 1, col});
      }
      if (col - 1 >= 0 && grid[row][col - 1] == 1) {
        grid[row][col - 1] = 2;
        decayedCells.push({row, col - 1});
      }
      if (col + 1 < n && grid[row][col + 1] == 1) {
        grid[row][col + 1] = 2;
        decayedCells.push({row, col + 1});
      }
    }

    // Check if any healthy cells remain
    bool hasHealthy = false;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        if (grid[i][j] == 1) {
          hasHealthy = true;
          break;
        }
      }
      if (hasHealthy) {
        break;
      }
    }

    if (!hasHealthy) {
      return minutes; // All healthy decayed
    }
  }

  return -1; // Not possible to decay all healthy
}

int main() {
  vector<vector<int>> grid = {
    {0, 2, 1, 0},
    {0, 1, 0, 1},
    {1, 1, 0, 0}
  };

  int minMinutes = minTimeToDecay(grid);
  if (minMinutes == -1) {
    cout << "All elements cannot be decayed." << endl;
  } else {
    cout << "Minimum minutes to decay all elements: " << minMinutes << endl;
  }

  return 0;
}

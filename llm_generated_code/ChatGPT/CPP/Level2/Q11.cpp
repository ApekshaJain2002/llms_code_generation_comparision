#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& map, int x, int y) {
    int rows = map.size();
    int cols = map[0].size();
    if (x < 0 || y < 0 || x >= rows || y >= cols || map[x][y] != 1) {
        return;
    }

    map[x][y] = -1;  // Mark this cell as visited by setting it to -1

    // Explore all four directions
    dfs(map, x + 1, y);
    dfs(map, x - 1, y);
    dfs(map, x, y + 1);
    dfs(map, x, y - 1);
}

int countEnclosedLandCells(vector<vector<int>>& map) {
    int rows = map.size();
    int cols = map[0].size();

    // Mark all land cells connected to the boundary as -1
    for (int i = 0; i < rows; i++) {
        if (map[i][0] == 1) dfs(map, i, 0);
        if (map[i][cols - 1] == 1) dfs(map, i, cols - 1);
    }
    for (int j = 0; j < cols; j++) {
        if (map[0][j] == 1) dfs(map, 0, j);
        if (map[rows - 1][j] == 1) dfs(map, rows - 1, j);
    }

    // Count the remaining land cells that are enclosed
    int enclosedCount = 0;
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) {
            if (map[i][j] == 1) {
                enclosedCount++;
            }
        }
    }

    return enclosedCount;
}

int main() {
    vector<vector<int>> map = {
        {0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 0},
        {0, 1, 0, 0, 1, 0},
        {0, 0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0}
    };

    int result = countEnclosedLandCells(map);

    cout << "Number of enclosed land cells: " << result << endl;

    return 0;
}


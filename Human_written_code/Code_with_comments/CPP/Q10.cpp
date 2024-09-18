#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    if(grid.empty()) return 0;
    
    int m = grid.size(), n = grid[0].size(), days = 0, tot = 0, cnt = 0;
    queue<pair<int, int>> rotten;
    
    // Count the total number of oranges and add rotten ones to the queue
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(grid[i][j] != 0) tot++;  // Count total oranges (rotten and fresh)
            if(grid[i][j] == 2) rotten.push({i, j}); // Add initial rotten oranges to the queue
        }
    }
    
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    
    // Perform BFS to rot adjacent fresh oranges
    while(!rotten.empty()){
        int k = rotten.size();
        cnt += k;  // Count processed oranges
        while(k--){
            int x = rotten.front().first, y = rotten.front().second;
            rotten.pop();
            for(int i = 0; i < 4; ++i){
                int nx = x + dx[i], ny = y + dy[i];
                // Check bounds and ensure the orange is fresh
                if(nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != 1) continue;
                grid[nx][ny] = 2;  // Rot the fresh orange
                rotten.push({nx, ny});
            }
        }
        if(!rotten.empty()) days++;  // Increase days when more oranges can be rotted
    }
    
    // Return days if all oranges are processed, otherwise return -1
    return tot == cnt ? days : -1;
}

int main() {
    vector<vector<int>> v{ {2,1,1} , {1,1,0} , {0,1,1} };
    int rotting = orangesRotting(v);
    cout << "Minimum Number of Minutes Required: " << rotting << endl;
}

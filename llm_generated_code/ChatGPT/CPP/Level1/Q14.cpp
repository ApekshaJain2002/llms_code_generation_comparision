#include <iostream>
#include <vector>

int uniquePaths(int M, int N) {
    std::vector<std::vector<int>> dp(M, std::vector<int>(N, 1));
    
    for (int i = 1; i < M; i++) {
        for (int j = 1; j < N; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    
    return dp[M - 1][N - 1];
}

int main() {
    int M = 3, N = 3;
    std::cout << "Total unique paths: " << uniquePaths(M, N) << std::endl;
    return 0;
}

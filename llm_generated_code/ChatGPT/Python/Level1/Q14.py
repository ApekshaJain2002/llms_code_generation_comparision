def unique_paths(M, N):
    dp = [[1] * N for _ in range(M)]
    for i in range(1, M):
        for j in range(1, N):
            dp[i][j] = dp[i-1][j] + dp[i][j-1]
    return dp[M-1][N-1]

# Example usage
M, N = 3, 7
print(unique_paths(M, N))

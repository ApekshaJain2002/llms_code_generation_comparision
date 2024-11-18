#include <iostream>
#include <vector>

using namespace std;

int knapsack(int W, const vector<int>& wt, const vector<int>& val) {
  int n = wt.size();
  vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0)); // DP table

  for (int i = 1; i <= n; ++i) {
    for (int w = 1; w <= W; ++w) {
      if (wt[i - 1] > w) {
        dp[i][w] = dp[i - 1][w]; // Cannot take the item
      } else {
        dp[i][w] = max(dp[i - 1][w], val[i - 1] + dp[i - 1][w - wt[i - 1]]);
        // Take the item or not based on max value
      }
    }
  }

  return dp[n][W]; // Maximum value attainable
}

int main() {
  int W = 50;
  vector<int> wt = {10, 20, 30};
  vector<int> val = {60, 100, 120};

  int maxValue = knapsack(W, wt, val);
  cout << "Maximum value in knapsack: " << maxValue << endl;

  return 0;
}

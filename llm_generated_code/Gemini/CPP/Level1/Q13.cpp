#include <iostream>
#include <vector>

using namespace std;

int maxNonAdjacentSum(const vector<int>& arr) {
  int n = arr.size();

  // Handle base cases
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return arr[0];
  }

  // Calculate maximum sum for the linear array
  vector<int> dp(n);
  dp[0] = arr[0];
  dp[1] = max(arr[0], arr[1]);

  for (int i = 2; i < n; ++i) {
    dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
  }

  // Consider the circular nature of the array
  int includeLast = arr[n - 1] + dp[n - 3];
  int excludeLast = dp[n - 1];

  return max(includeLast, excludeLast);
}

int main() {
  vector<int> arr = {5, 5, 10, 100, 10, 5};
  int maxSum = maxNonAdjacentSum(arr);
  cout << "Maximum sum of non-adjacent elements: " << maxSum << endl;

  return 0;
}

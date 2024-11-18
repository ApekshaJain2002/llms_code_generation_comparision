#include <iostream>

int climbStairs(int n) {
  // Base cases: 0 or 1 stairs
  if (n <= 1) {
    return n;
  }

  // Initialize variables for dynamic programming
  int oneStep = 1;
  int twoSteps = 1;
  int totalWays = 0;

  // Dynamic programming approach
  for (int i = 2; i <= n; ++i) {
    totalWays = oneStep + twoSteps;
    oneStep = twoSteps;
    twoSteps = totalWays;
  }

  return totalWays;
}

int main() {
  int stairs = 4;
  int totalWays = climbStairs(stairs);
  cout << "Number of ways to climb " << stairs << " stairs: " << totalWays << endl;

  return 0;
}

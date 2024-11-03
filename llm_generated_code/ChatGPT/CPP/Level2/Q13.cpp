#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int robLinear(const vector<int>& houses) {
    int n = houses.size();
    if (n == 0) return 0;
    if (n == 1) return houses[0];

    vector<int> dp(n, 0);
    dp[0] = houses[0];
    dp[1] = max(houses[0], houses[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + houses[i]);
    }

    return dp[n - 1];
}

int robCircular(const vector<int>& houses) {
    int n = houses.size();
    if (n == 1) return houses[0];

    // Case 1: Rob from the first house to the second-to-last house
    int max1 = robLinear(vector<int>(houses.begin(), houses.end() - 1));

    // Case 2: Rob from the second house to the last house
    int max2 = robLinear(vector<int>(houses.begin() + 1, houses.end()));

    // Return the maximum of both cases
    return max(max1, max2);
}

int main() {
    vector<int> houses = {2, 3, 2};  // Example input

    int maxMoney = robCircular(houses);

    cout << "Maximum money the thief can rob: " << maxMoney << endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& brands, vector<int>& prices, int shelves) {
    int n = brands.size();
    vector<vector<int>> dp(n + 1, vector<int>(shelves + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= shelves; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + prices[i - 1]);
        }
    }

    return dp[n][shelves];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, shelves;
        cin >> n >> shelves;

        vector<int> brands(n), prices(n);
        for (int i = 0; i < n; ++i) {
            cin >> brands[i] >> prices[i];
        }

        int maxProfit = maxProfit(prices, shelves);
        cout << maxProfit << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> prices(k);
        for (int i = 0; i < k; i++) {
            prices[i] = 1 << i;
        }

        int dp[n + 1];
        fill(dp, dp + n + 1, 0);
        dp[0] = 1;

        for (int price : prices) {
            for (int i = price; i <= n; i++) {
                dp[i] += dp[i - price];
            }
        }

        cout << dp[n] << endl;
    }

    return 0;
}

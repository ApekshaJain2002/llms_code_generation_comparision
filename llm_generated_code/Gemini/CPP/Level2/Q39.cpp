#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> dp(n + 1);
        dp[0] = 1;

        for (int i = 1; i <= k; i++) {
            int price = 1 << (i - 1);
            for (int j = price; j <= n; j++) {
                dp[j] += dp[j - price];
            }
        }

        cout << dp[n] << endl;
    }

    return 0;
}

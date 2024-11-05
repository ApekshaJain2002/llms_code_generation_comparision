#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProfitWithTwoTransactions(const vector<int>& prices) {
    int n = prices.size();
    if (n < 2) return 0;

    vector<int> leftProfit(n, 0);
    vector<int> rightProfit(n, 0);

    int minPrice = prices[0];
    for (int i = 1; i < n; ++i) {
        minPrice = min(minPrice, prices[i]);
        leftProfit[i] = max(leftProfit[i - 1], prices[i] - minPrice);
    }

    int maxPrice = prices[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        maxPrice = max(maxPrice, prices[i]);
        rightProfit[i] = max(rightProfit[i + 1], maxPrice - prices[i]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; ++i) {
        maxProfit = max(maxProfit, leftProfit[i] + rightProfit[i]);
    }

    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    cout << maxProfitWithTwoTransactions(prices) << endl;
    return 0;
}

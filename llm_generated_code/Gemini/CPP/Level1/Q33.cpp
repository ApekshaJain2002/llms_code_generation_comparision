#include <iostream>
#include <vector>

using namespace std;

int maxProfit(const vector<int>& prices) {
    int n = prices.size();
    if (n <= 1) {
        return 0;
    }

    vector<int> leftMax(n);
    leftMax[0] = prices[0];
    for (int i = 1; i < n; ++i) {
        leftMax[i] = min(leftMax[i - 1], prices[i]);
    }

    vector<int> rightMax(n);
    rightMax[n - 1] = prices[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], prices[i]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; ++i) {
        maxProfit = max(maxProfit, rightMax[i] - leftMax[i]);
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

    int maxProfit = maxProfit(prices);
    cout << maxProfit << endl;

    return 0;
}

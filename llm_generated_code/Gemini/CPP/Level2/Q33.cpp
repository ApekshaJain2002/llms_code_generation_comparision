#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxProfit(const vector<int>& prices) {
    int n = prices.size();
    if (n <= 1) {
        return 0;
    }
    vector<int> profits(n);
    int max_price = prices[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        max_price = max(max_price, prices[i]);
        profits[i] = max(profits[i + 1], max_price - prices[i]);
    }
    int min_price = prices[0];
    int max_profit = 0;
    for (int i = 1; i < n; i++) {
        max_profit = max(max_profit, profits[i] + max(prices[i] - min_price, 0));
        min_price = min(min_price, prices[i]);
    }

    return max_profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4}; 

    int max_profit = maxProfit(prices);
    cout << "Maximum profit: " << max_profit << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n <= 1) {
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;

    // Time complexity: O(n)
    // Space complexity: O(1)
    // Lines of code: 11
    // Cyclomatic complexity: 2
    for (int i = 1; i < n; i++) {
        max_profit = max(max_profit, prices[i] - min_price);
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

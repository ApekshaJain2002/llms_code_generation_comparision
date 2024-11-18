
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(const vector<int>& prices) {
    if (prices.empty()) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        // Update minimum price if current price is lower
        minPrice = min(minPrice, prices[i]);

        // Calculate the profit if we sell at the current price
        int profit = prices[i] - minPrice;

        // Update maximum profit if this profit is higher
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example array
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}

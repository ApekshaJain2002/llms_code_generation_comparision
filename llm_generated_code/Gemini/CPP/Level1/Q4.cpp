#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n <= 1) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = maxProfit(prices);
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices, int fee) {
    int n = prices.size();
    if (n <= 1) {
        return 0;
    }

    int cash = 0, hold = -prices[0];

    for (int i = 1; i < n; i++) {
        cash = max(cash, hold + prices[i] - fee);
        hold = max(hold, cash - prices[i]);
    }

    return cash;
}

int main() {
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;

    int maxProfi = maxProfit(prices, fee);
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
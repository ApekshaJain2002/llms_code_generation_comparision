#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices, int fee) {
    int cash = 0, hold = -prices[0] - fee;

    for (int i = 1; i < prices.size(); i++) {
        cash = max(cash, hold + prices[i] - fee);
        hold = max(hold, cash - prices[i] - fee);
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
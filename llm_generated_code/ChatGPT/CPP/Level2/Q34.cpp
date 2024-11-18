#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices, int fee) {
    int n = prices.size();
    int hold = -prices[0] - fee;
    int cash = 0;
    
    for (int i = 1; i < n; ++i) {
        cash = max(cash, hold + prices[i]);
        hold = max(hold, cash - prices[i] - fee);
    }
    
    return cash;
}

int main() {
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;
    cout << "Maximum Profit: " << maxProfit(prices, fee) << endl;
    return 0;
}

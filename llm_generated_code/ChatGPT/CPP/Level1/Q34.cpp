#include <iostream>
#include <vector>
#include <algorithm>

int maxProfit(std::vector<int>& prices, int fee) {
    int n = prices.size();
    int hold = -prices[0];
    int cash = 0;

    for (int i = 1; i < n; i++) {
        cash = std::max(cash, hold + prices[i] - fee);
        hold = std::max(hold, cash - prices[i]);
    }
    
    return cash;
}

int main() {
    std::vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;
    std::cout << "Maximum Profit: " << maxProfit(prices, fee) << std::endl;
    return 0;
}

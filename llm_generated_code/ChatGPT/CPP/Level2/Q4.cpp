#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price;  // Update minimum price if a lower price is found
        }
        else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice;  // Update max profit if current profit is higher
        }
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};  // Example price changes

    int profit = maxProfit(prices);

    cout << "Maximum profit Rohan can achieve: " << profit << endl;

    return 0;
}


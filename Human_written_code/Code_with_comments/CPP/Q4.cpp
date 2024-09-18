#include<bits/stdc++.h>
using namespace std;

// Function to calculate the maximum profit
int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int minPrice = INT_MAX; // Track the minimum price so far

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]); // Update the minimum price
        maxPro = max(maxPro, arr[i] - minPrice); // Calculate maximum profit
    }
    
    return maxPro;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;

    return 0;
}

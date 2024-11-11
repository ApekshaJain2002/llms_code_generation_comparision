#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

long long maxEarnings(int n, int m, vector<int>& brands, vector<int>& prices) {
    unordered_map<int, vector<int>> brandPrices;
    
    for (int i = 0; i < m; ++i) {
        brandPrices[brands[i]].push_back(prices[i]);
    }
    
    vector<long long> maxBrandEarnings;
    for (auto& bp : brandPrices) {
        sort(bp.second.begin(), bp.second.end(), greater<int>());
        long long sum = 0;
        for (int price : bp.second) {
            sum += price;
        }
        maxBrandEarnings.push_back(sum);
    }
    
    sort(maxBrandEarnings.begin(), maxBrandEarnings.end(), greater<long long>());
    long long maxEarnings = 0;
    for (int i = 0; i < n && i < maxBrandEarnings.size(); ++i) {
        maxEarnings += maxBrandEarnings[i];
    }
    
    return maxEarnings;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> brands(m);
        vector<int> prices(m);
        
        for (int i = 0; i < m; ++i) {
            cin >> brands[i] >> prices[i];
        }
        
        cout << maxEarnings(n, m, brands, prices) << endl;
    }
    
    return 0;
}

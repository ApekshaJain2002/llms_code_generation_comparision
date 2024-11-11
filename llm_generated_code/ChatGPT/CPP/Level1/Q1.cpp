#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

long long maxEarnings(int n, int k, vector<int>& brands, vector<int>& costs) {
    unordered_map<int, vector<int>> brandCostMap;
    
    // Group the costs by their brand
    for (int i = 0; i < k; ++i) {
        brandCostMap[brands[i]].push_back(costs[i]);
    }
    
    vector<long long> maxEarnings;
    
    // Find the total cost for each brand and sort
    for (auto& entry : brandCostMap) {
        vector<int>& costList = entry.second;
        long long brandTotal = 0;
        for (int cost : costList) {
            brandTotal += cost;
        }
        maxEarnings.push_back(brandTotal);
    }
    
    // Sort earnings in descending order
    sort(maxEarnings.rbegin(), maxEarnings.rend());
    
    // Take the top 'n' earnings
    long long totalEarnings = 0;
    for (int i = 0; i < min(n, (int)maxEarnings.size()); ++i) {
        totalEarnings += maxEarnings[i];
    }
    
    return totalEarnings;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> brands(k), costs(k);
        for (int i = 0; i < k; ++i) {
            cin >> brands[i];
        }
        for (int i = 0; i < k; ++i) {
            cin >> costs[i];
        }
        
        cout << maxEarnings(n, k, brands, costs) << endl;
    }
    return 0;
}

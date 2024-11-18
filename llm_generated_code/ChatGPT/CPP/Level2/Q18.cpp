#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

long long maxRevenue(int n, vector<int>& brands, vector<int>& prices) {
    unordered_map<int, long long> brandRevenue;
    for (int i = 0; i < brands.size(); i++) {
        brandRevenue[brands[i]] += prices[i];
    }

    vector<long long> revenues;
    for (const auto& pair : brandRevenue) {
        revenues.push_back(pair.second);
    }

    sort(revenues.rbegin(), revenues.rend());

    long long maxEarnings = 0;
    for (int i = 0; i < min(n, (int)revenues.size()); i++) {
        maxEarnings += revenues[i];
    }

    return maxEarnings;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> m >> n;

        vector<int> brands(m), prices(m);
        for (int i = 0; i < m; i++) {
            cin >> brands[i] >> prices[i];
        }

        cout << maxRevenue(n, brands, prices) << endl;
    }

    return 0;
}

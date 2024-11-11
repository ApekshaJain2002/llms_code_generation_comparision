#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> bottles(k);
        for (int i = 0; i < k; ++i) {
            cin >> bottles[i].first >> bottles[i].second;
        }

        // Sort bottles by brand index
        sort(bottles.begin(), bottles.end());

        int available_shelves = n;
        long long total_cost = 0;

        for (int i = 0; i < k; ++i) {
            int brand = bottles[i].first;
            int cost = bottles[i].second;

            // Place as many bottles of the current brand as possible
            int num_bottles = min(available_shelves, k - i);
            total_cost += num_bottles * cost;
            available_shelves -= num_bottles;

            // Skip to the next brand
            while (i + 1 < k && bottles[i + 1].first == brand) {
                ++i;
            }
        }

        cout << total_cost << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> lamps(n);
        for (int i = 0; i < n; i++) {
            cin >> lamps[i].first >> lamps[i].second;
        }

        sort(lamps.begin(), lamps.end(), greater<pair<int, int>>());

        int current_a = 0, total_points = 0;
        for (auto lamp : lamps) {
            if (lamp.first > current_a) {
                current_a++;
                total_points += lamp.second;
            }
        }

        cout << total_points << endl;
    }

    return 0;
}

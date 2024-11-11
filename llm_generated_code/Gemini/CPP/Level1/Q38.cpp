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

        int current_power = 0;
        int max_power = 0;

        for (auto lamp : lamps) {
            current_power += lamp.second;
            if (lamp.first <= current_power) {
                max_power = max(max_power, current_power);
            } else {
                break;
            }
        }

        cout << max_power << endl;
    }

    return 0;
}

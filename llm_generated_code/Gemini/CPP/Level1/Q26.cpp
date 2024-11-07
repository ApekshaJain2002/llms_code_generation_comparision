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

        vector<int> sticks(n);
        for (int i = 0; i < n; i++) {
            cin >> sticks[i];
        }

        sort(sticks.begin(), sticks.end());

        int minOps = INT_MAX;
        for (int i = 2; i < n; i++) {
            int target = sticks[i] / 3;
            int ops = 0;
            for (int j = 0; j < 3; j++) {
                ops += abs(sticks[i - j] - target);
            }
            minOps = min(minOps, ops);
        }

        cout << minOps << endl;
    }

    return 0;
}

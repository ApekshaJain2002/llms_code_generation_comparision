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

        int min_operations = INT_MAX;
        for (int i = 0; i < n - 2; i++) {
            int a = sticks[i];
            int b = sticks[i + 1];
            int c = sticks[i + 2];

            int target_length = max({a, b, c});
            int operations = (target_length - a) + (target_length - b) + (target_length - c);

            min_operations = min(min_operations, operations);
        }

        cout << min_operations << endl;
    }

    return 0;
}

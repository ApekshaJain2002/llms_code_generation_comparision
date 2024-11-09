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

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = n;
        for (int i = 0; i < n - 2; ++i) {
            int diff = a[i + 2] - a[i];
            ans = min(ans, diff);
        }

        cout << ans << endl;
    }

    return 0;
}

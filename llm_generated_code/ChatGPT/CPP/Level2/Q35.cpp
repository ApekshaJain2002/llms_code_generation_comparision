#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, f;
        cin >> n >> k >> f;
        f--;  // Zero-indexed
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int fav_value = a[f];
        sort(a.begin(), a.end(), greater<int>());
        int fav_pos = find(a.begin(), a.end(), fav_value) - a.begin();
        if (fav_pos < k) {
            cout << "YES" << endl;
        } else if (fav_pos >= k && fav_pos < n - k) {
            cout << "MAYBE" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

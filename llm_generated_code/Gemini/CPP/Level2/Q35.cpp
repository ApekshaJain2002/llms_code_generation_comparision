#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        cout << (a[k - 1] >= a[f - 1] ? "YES\n" : a[k] < a[f - 1] ? "NO\n" : "MAYBE\n");
    }
}
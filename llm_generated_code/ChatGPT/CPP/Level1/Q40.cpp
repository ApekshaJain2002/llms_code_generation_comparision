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
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        int k = -1;
        for (int i = 1; i < n; i++) {
            int diff = a[i] - a[i-1];
            if (k == -1) {
                k = diff;
            } else {
                k = __gcd(k, diff);
            }
        }

        cout << k << endl;
    }

    return 0;
}

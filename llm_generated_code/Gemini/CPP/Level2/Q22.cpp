#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll g = gcd(a, b);
        a /= g;
        b /= g;

        g = gcd(c, d);
        c /= g;
        d /= g;

        int ans = 0;
        while (a != c || b != d) {
            if (a < c) {
                a *= 2;
                ans++;
            } else if (a > c) {
                c *= 2;
                ans++;
            } else if (b < d) {
                b *= 2;
                ans++;
            } else {
                d *= 2;
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

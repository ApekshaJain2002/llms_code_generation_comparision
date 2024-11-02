#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a * d == b * c) {
        cout << 0 << endl;
        return 0;
    }

    int g1 = gcd(a, b);
    a /= g1;
    b /= g1;

    int g2 = gcd(c, d);
    c /= g2;
    d /= g2;

    int ops = 0;

    while (a != c || b != d) {
        if (a < c) {
            a *= 2;
        } else if (a > c) {
            a /= 2;
        }
        ops++;

        if (b < d) {
            b *= 2;
        } else if (b > d) {
            b /= 2;
        }
        ops++;
    }

    cout << ops << endl;
    return 0;
}

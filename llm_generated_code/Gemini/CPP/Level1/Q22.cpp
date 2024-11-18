#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;

    gcd = __gcd(c, d);
    c /= gcd;
    d /= gcd;

    int lcm = (a * b * c * d) / __gcd(a * d, b * c);
    int x = lcm / (a * d);
    int y = lcm / (b * c);

    cout << max(x - 1, y - 1);

    return 0;
}

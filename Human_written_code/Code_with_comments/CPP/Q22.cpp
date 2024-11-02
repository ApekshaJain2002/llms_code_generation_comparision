#include <iostream>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;  // Read four integers
    long long x = a * d, y = b * c;  // Compute cross-products

    if (x == y)  // Check if products are equal
        cout << "0\n";  // Output 0 if ratios are equal
    else if ((y != 0 && x % y == 0) || (x != 0 && y % x == 0))
        cout << "1\n";  // Output 1 if one ratio is a multiple of the other
    else
        cout << "2\n";  // Output 2 if ratios are neither equal nor multiples
}

int main() {
    ios_base::sync_with_stdio(false);  // Optimize input/output speed
    cin.tie(nullptr);  // Untie cin and cout for faster IO

    int t;
    cin >> t;  // Read number of test cases
    while (t--)
        solve();  // Solve each test case
}

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int g1 = gcd(a, b);
        int g2 = gcd(c, d);
        
        a /= g1;
        b /= g1;
        c /= g2;
        d /= g2;
        
        int claps = 0;
        
        while (a != c || b != d) {
            if (a < c) {
                a *= 2;
                claps++;
            } else if (a > c) {
                c *= 2;
                claps++;
            }
            
            if (b < d) {
                b *= 2;
                claps++;
            } else if (b > d) {
                d *= 2;
                claps++;
            }
        }
        
        cout << claps << endl;
    }
    
    return 0;
}

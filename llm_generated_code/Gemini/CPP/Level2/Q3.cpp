#include <iostream>
#include <cmath>

using namespace std;

bool canBeSumOfLargeIntegers(int x) {
    int digits = 0;
    int temp = x;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Check if the first digit is greater than or equal to 10
    // and the last digit is less than or equal to 9.
    return x / pow(10, digits - 1) >= 10 && x % 10 <= 9;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        if (canBeSumOfLargeIntegers(x)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

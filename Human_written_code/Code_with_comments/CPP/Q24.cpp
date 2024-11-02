#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int d = 1;  // Counter for consecutive identical characters

    cin >> s;

    for (int i = 0; i < s.length() - 1; ++i) {
        if (d >= 7)  // Stop if 7 consecutive identical characters are found
            break;

        if (s[i] == s[i + 1]) {
            d++;  // Increment count if characters match
        } else {
            d = 1;  // Reset count if characters differ
        }
    }

    // Output result based on the count of consecutive identical characters
    cout << (d >= 7 ? "YES" : "NO");

    return 0;
}

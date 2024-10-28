#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s;
    bool isSymmetric = true;

    // Check if all characters are symmetric and if it's a palindrome
    for (char c : s) {
        if (c != 'A' && c != 'H' && c != 'I' && c != 'M' && c != 'O' && c != 'T' && c != 'U' && c != 'V' && c != 'W' && c != 'X' && c != 'Y') {
            isSymmetric = false;
            break;
        }
    }

    if (isSymmetric) {
        t = s;
        reverse(t.begin(), t.end());
        isSymmetric = (s == t);
    }

    cout << (isSymmetric ? "YES" : "NO") << endl;
    return 0;
}

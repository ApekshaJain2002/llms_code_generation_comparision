#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ones = 0;
        for (char c : s) {
            ones += (c == '1');
        }

        if (ones == 0) {
            cout << -1 << endl;
        } else if (ones == 4) {
            cout << 0 << endl;
        } else if (ones == 1 || ones == 2) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int cnt = 0;
        char prev = ' ';

        for (char c : s) {
            if (c != prev) {
                cnt++;
                prev = c;
            }
        }

        if (cnt <= 2) {
            cout << cnt << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0, cur = 0;
    char prev = ' ';

    for (char c : s) {
        if (c != prev) {
            if (cur >= 5) {
                cnt++;
                cur = 0;
            }
            prev = c;
        }
        cur++;
    }

    if (cur > 0) {
        cnt++;
    }

    cout << cnt;
    return 0;
}

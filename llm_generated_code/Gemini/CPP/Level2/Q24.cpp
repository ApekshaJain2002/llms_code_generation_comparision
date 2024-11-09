#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 1;
    char prev = s[0];

    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == prev) {
            cnt++;
            if (cnt >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            cnt = 1;
            prev = s[i];
        }
    }

    cout << "NO";
    return 0;
}

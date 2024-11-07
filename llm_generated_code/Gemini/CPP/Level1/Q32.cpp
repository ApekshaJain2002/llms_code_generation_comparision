#include <iostream>
#include <string>

using namespace std;

bool isMeow(const string& s) {
    int i = 0, n = s.size();
    while (i < n && (s[i] == 'm' || s[i] == 'M')) i++;
    while (i < n && (s[i] == 'e' || s[i] == 'E')) i++;
    while (i < n && (s[i] == 'o' || s[i] == 'O')) i++;
    while (i < n && (s[i] == 'w' || s[i] == 'W')) i++;
    return i == n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (isMeow(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

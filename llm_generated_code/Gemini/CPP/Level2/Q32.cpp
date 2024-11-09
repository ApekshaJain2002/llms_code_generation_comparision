#include <iostream>
#include <string>

using namespace std;

bool isMeow(const string& s) {
    int n = s.size();
    if (n < 4) {
        return false;
    }

    int i = 0;
    while (i < n && (s[i] == 'm' || s[i] == 'M')) {
        i++;
    }

    if (i == 0 || i == n) {
        return false;
    }

    while (i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
    }

    if (i == 0 || i == n) {
        return false;
    }

    while (i < n && (s[i] == 'o' || s[i] == 'O')) {
        i++;
    }

    if (i == 0 || i == n) {
        return false;
    }

    while (i < n && (s[i] == 'w' || s[i] == 'W')) {
        i++;
    }

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

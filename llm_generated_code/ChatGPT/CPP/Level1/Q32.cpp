#include <iostream>
#include <string>

using namespace std;

bool isMeow(const string& s) {
    int i = 0;
    int n = s.length();

    if (i < n && (s[i] == 'm' || s[i] == 'M')) {
        while (i < n && (s[i] == 'm' || s[i] == 'M')) i++;
    } else return false;

    if (i < n && (s[i] == 'e' || s[i] == 'E')) {
        while (i < n && (s[i] == 'e' || s[i] == 'E')) i++;
    } else return false;

    if (i < n && (s[i] == 'o' || s[i] == 'O')) {
        while (i < n && (s[i] == 'o' || s[i] == 'O')) i++;
    } else return false;

    if (i < n && (s[i] == 'w' || s[i] == 'W')) {
        while (i < n && (s[i] == 'w' || s[i] == 'W')) i++;
    } else return false;

    return i == n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << (isMeow(s) ? "YES" : "NO") << endl;
    }
    return 0;
}

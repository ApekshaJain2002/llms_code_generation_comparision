#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count >= 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}

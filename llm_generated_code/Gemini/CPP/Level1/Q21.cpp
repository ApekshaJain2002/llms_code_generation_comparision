#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'W') {
            res += s[i];
        } else if (i + 2 < s.size() && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
        }
    }

    cout << res;
    return 0;
}

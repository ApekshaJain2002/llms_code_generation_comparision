#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string res = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != 'W') {
            res += s[i];
        } else {
            while (i < s.size() && s[i] == 'W') {
                ++i;
            }
            if (i < s.size() && s[i] != 'U') {
                res += ' ';
            }
        }
    }

    cout << res;
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minOperationsToAllOnes(const string& s) {
    int count0 = count(s.begin(), s.end(), '0');
    if (count0 == 0) return 0;
    if (count0 == 4) return -1;
    if (count0 == 3) return 3;
    if (count0 == 2) {
        if ((s[0] == '0' && s[1] == '0') || (s[1] == '0' && s[2] == '0') || (s[2] == '0' && s[3] == '0'))
            return 2;
        return 3;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minOperationsToAllOnes(s) << endl;
    }
    return 0;
}

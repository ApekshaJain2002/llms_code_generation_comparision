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
        int cost = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cost++;
            }
        }

        cout << min(cost, n - cost) << endl;
    }

    return 0;
}

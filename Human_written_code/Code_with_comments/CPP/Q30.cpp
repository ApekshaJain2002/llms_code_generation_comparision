#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        map<char, int> m;
        string n;
        cin >> n;  // Read input string
        int ans = 0;

        // Count frequency of each character in the string
        for (int i = 0; i < n.length(); i++) {
            m[n[i]]++;
        }

        // Check cases based on the number of unique characters
        if (m.size() == 4)
            cout << 4 << endl;  // All characters are unique
        else if (m.size() == 1)
            cout << -1 << endl;  // All characters are the same
        else if (m.size() == 3)
            cout << 4 << endl;  // Three unique characters
        else {
            // When there are two unique characters, check their counts
            for (auto it : m) {
                if (it.second == 3) {  // One character appears three times
                    cout << 6 << endl;
                    ans = 1;
                    break;
                }
            }
            if (ans == 0)
                cout << 4 << endl;  // Otherwise, both characters appear twice
        }
    }

    return 0;
}

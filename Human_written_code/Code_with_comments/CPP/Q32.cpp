#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the length of the string
        string str = "meow", str1 = "MEOW";
        string s;
        cin >> s;  // Read the input string
        int cnt = 0;

        // Check if the string starts with 'm/M' and ends with 'w/W'
        if ((s[0] != 'm' && s[0] != 'M') || (s[n - 1] != 'w' && s[n - 1] != 'W')) {
            cnt = -1;
        } else {
            int j = 0;

            // Iterate through the string to check for 'meow' pattern
            for (int i = 1; i < n; i++) {
                if (s[i] != str[j] && s[i] != str1[j]) {
                    j++;  // Move to the next character in 'meow'
                }

                if (s[i] == str[j] || s[i] == str1[j]) {
                    continue;
                } else {
                    cnt = -1;  // If pattern breaks, mark as invalid
                }
            }
        }

        // Output result based on validity of pattern
        if (cnt == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

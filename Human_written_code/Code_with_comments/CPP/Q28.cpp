#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    int l = s.length();

    // Count uppercase and lowercase letters
    for (int i = 0; i < l; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
    }

    // Convert the string based on the count comparison
    if (lower >= upper) {
        for (int i = 0; i < l; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;  // Convert to lowercase
            }
        }
    } else {
        for (int i = 0; i < l; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;  // Convert to uppercase
            }
        }
    }

    cout << s << endl;
    return 0;
}

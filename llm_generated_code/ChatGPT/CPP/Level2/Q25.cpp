#include <iostream>
#include <string>
using namespace std;

bool isMirrorWord(string s) {
    string mirrorLetters = "AHIMOTUVWXY";
    for (char c : s) {
        if (mirrorLetters.find(c) == string::npos) {
            return false;
        }
    }
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (isMirrorWord(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

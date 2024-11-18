#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    vector<int> count(26, 0);

    for (char c : s1) {
        count[c - 'a']++;
    }

    for (char c : s2) {
        count[c - 'a']--;
        if (count[c - 'a'] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if (isAnagram(s1, s2)) {
        cout << "The two strings are anagrams." << endl;
    } else {
        cout << "The two strings are not anagrams." << endl;
    }

    return 0;
}
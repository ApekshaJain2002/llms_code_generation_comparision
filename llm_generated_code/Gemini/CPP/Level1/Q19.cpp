#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isAnagram(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    unordered_map<char, int> charCount;

    for (char c : str1) {
        charCount[c]++;
    }

    for (char c : str2) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return false;
        }
        charCount[c]--;
    }

    return true;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams" << endl;
    } else {
        cout << "The strings are not anagrams" << endl;
    }

    return 0;
}
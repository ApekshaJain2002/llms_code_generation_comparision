#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string code1, string code2) {
    if (code1.size() != code2.size()) return false;
    sort(code1.begin(), code1.end());
    sort(code2.begin(), code2.end());
    return code1 == code2;
}

int main() {
    string code1 = "listen", code2 = "silent";
    if (areAnagrams(code1, code2)) {
        cout << "The codes are anagrams." << endl;
    } else {
        cout << "The codes are not anagrams." << endl;
    }
    return 0;
}

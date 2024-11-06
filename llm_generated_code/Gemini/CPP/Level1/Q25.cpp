#include <iostream>
#include <string>

using namespace std;

bool isMirrorChar(char c) {
    return c == 'A' || c == 'H' || c == 'I' || c == 'M' || c == 'O' || c == 'T' || c == 'U' || c == 'V' || c == 'W' || c == 'X' || c == 'Y';
}

int main() {
    string word;
    cin >> word;

    int left = 0, right = word.length() - 1;
    bool isMirror = true;

    while (left < right) {
        if (!isMirrorChar(word[left]) || !isMirrorChar(word[right]) || word[left] != word[right]) {
            isMirror = false;
            break;
        }
        left++;
        right--;
    }

    cout << (isMirror ? "YES" : "NO");
    return 0;
}

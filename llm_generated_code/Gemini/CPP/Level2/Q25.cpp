#include <iostream>
#include <string>

using namespace std;

bool isMirrorWord(const string& word) {
    int n = word.size();
    for (int i = 0; i < n / 2; ++i) {
        if (word[i] != word[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string word;
    cin >> word;

    if (isMirrorWord(word)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

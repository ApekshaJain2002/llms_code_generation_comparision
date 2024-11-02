#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string word;
    cin >> word;

    unordered_set<char> mirror_letters = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};

    int n = word.length();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1] || mirror_letters.find(word[i]) == mirror_letters.end()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (n % 2 == 1 && mirror_letters.find(word[n / 2]) == mirror_letters.end()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int upperCount = 0, lowerCount = 0;
    for (char c : word) {
        if (isupper(c)) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }

    if (lowerCount >= upperCount) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    } else {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    cout << word << endl;

    return 0;
}

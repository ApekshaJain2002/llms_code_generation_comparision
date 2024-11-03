#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseWords(vector<string>& words) {
    // Reverse the entire string
    reverse(words.begin(), words.end());

    // Reverse each word
    for (string& word : words) {
        reverse(word.begin(), word.end());
    }
}

int main() {
    vector<string> words = {"hello", "world", "how", "are", "you"};
    reverseWords(words);

    for (string word : words) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

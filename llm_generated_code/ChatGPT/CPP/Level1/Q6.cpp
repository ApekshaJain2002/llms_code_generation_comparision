#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    // Split the string by spaces and store words in a vector
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Join the words back into a single string
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string s = "Hello World from ChatGPT";
    cout << "Original string: " << s << endl;
    cout << "Reversed words: " << reverseWords(s) << endl;
    return 0;
}


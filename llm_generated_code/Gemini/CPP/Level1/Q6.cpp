#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word, reversed;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        reversed += word + " ";
    }

    reversed.pop_back(); // Remove the extra space at the end

    return reversed;
}

int main() {
    string s = "the sky is blue";
    string reversed = reverseWords(s);
    cout << reversed << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

string reverseSpell(string spell) {
    vector<string> words;
    stringstream ss(spell);
    string word;

    // Split the spell into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    string reversedSpell;
    for (int i = words.size() - 1; i >= 0; i--) {
        reversedSpell += words[i];
        if (i != 0) reversedSpell += " ";  // Add space between words
    }

    return reversedSpell;
}

int main() {
    string spell = "abracadabra alohomora expelliarmus";  // Example spell words

    string reversedSpell = reverseSpell(spell);

    cout << "Reversed spell: " << reversedSpell << endl;

    return 0;
}


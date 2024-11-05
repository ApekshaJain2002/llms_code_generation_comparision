#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    int lowerCount = 0, upperCount = 0;

    for (char c : word) {
        if (islower(c)) lowerCount++;
        else upperCount++;
    }

    cout << (lowerCount >= upperCount ? 
              static_cast<string>(word.begin(), word.end()).append(1, tolower(word[0])) : 
              static_cast<string>(word.begin(), word.end()).append(1, toupper(word[0]))) << endl;

    for (char& c : word) {
        c = (lowerCount >= upperCount) ? tolower(c) : toupper(c);
    }
    
    cout << word << endl;
    return 0;
}

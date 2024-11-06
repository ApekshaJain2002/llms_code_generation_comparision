#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string song;
    getline(cin, song);
    stringstream ss(song);
    string word;
    bool first = true;
    
    while (getline(ss, word, 'W')) {
        if (word != "" && (first || word != "")) {
            if (!first) cout << " ";
            cout << word;
            first = false;
        }
    }
    return 0;
}

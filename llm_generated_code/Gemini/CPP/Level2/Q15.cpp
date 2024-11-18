#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> names = {"Alice", "Bob", "Alice", "Charlie", "Bob", "Alice"};
    map<string, int> freq;

    for (string name : names) {
        freq[name]++;
    }

    for (auto& it : freq) {
        cout << it.first << ": " << it.second << " times\n";
    }

    return 0;
}
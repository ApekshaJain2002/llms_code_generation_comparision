#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<string> nameTags = {"Alice", "Bob", "Alice", "Charlie", "Bob", "Alice"};
    unordered_map<string, int> nameCount;

    for (const string& name : nameTags) {
        nameCount[name]++;
    }

    for (const auto& pair : nameCount) {
        cout << pair.first << ": " << pair.second << " times" << endl;
    }

    return 0;
}

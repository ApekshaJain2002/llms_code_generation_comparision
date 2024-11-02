#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find("WUB", pos)) != string::npos) {
        input.replace(pos, 3, " ");
        pos++;
    }
    stringstream ss(input);
    string word, result;
    while (ss >> word) {
        result += word + " ";
    }
    if (!result.empty()) {
        result.pop_back();
    }
    cout << result << endl;
    return 0;
}

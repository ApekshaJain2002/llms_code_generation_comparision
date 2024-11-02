#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int trips = 0;
    int count = 1;

    for (size_t i = 1; i <= s.length(); i++) {
        if (i < s.length() && s[i] == s[i - 1]) {
            count++;
        } else {
            trips += (count + 4) / 5;
            count = 1;
        }
    }
    
    cout << trips << endl;
    return 0;
}

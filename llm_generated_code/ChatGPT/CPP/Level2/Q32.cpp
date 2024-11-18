#include <iostream>
#include <regex>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    regex pattern("^[mM]+[eE]+[oO]+[wW]+$");
    
    while (t--) {
        string s;
        cin >> s;
        
        if (regex_match(s, pattern)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

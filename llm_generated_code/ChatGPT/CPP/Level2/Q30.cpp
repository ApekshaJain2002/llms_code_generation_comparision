#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        set<char> colors(s.begin(), s.end());
        
        if (colors.size() == 1) {
            cout << -1 << endl;
        } else {
            cout << 4 << endl;
        }
    }
    
    return 0;
}

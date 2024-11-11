#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int n = s.size();
        int cost = 0;
        
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                cost++;
                i++;
            }
        }
        
        cout << cost << endl;
    }
    
    return 0;
}

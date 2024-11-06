#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int count = 1;
        char current = s[0];
        int items = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == current) {
                items++;
            } else {
                current = s[i];
                items = 1;
            }
            
            if (items == 5) {
                count++;
                items = 0;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}

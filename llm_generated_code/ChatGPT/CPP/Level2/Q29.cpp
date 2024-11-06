#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> stones(n);
        
        for (int i = 0; i < n; i++) {
            cin >> stones[i];
        }
        
        sort(stones.begin(), stones.end());
        
        bool possible = true;
        
        for (int i = 1; i < n; i++) {
            if (stones[i] <= stones[i - 1]) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

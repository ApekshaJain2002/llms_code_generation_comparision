#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> sticks(n);
        
        for (int i = 0; i < n; i++) {
            cin >> sticks[i];
        }
        
        sort(sticks.begin(), sticks.end());
        
        int min_operations = INT_MAX;
        
        for (int target = sticks[0]; target <= sticks[n-1]; target++) {
            int operations = 0;
            vector<int> adjustments;
            
            for (int i = 0; i < n; i++) {
                adjustments.push_back(abs(sticks[i] - target));
            }
            
            sort(adjustments.begin(), adjustments.end());
            
            if (n >= 3) {
                operations = adjustments[0] + adjustments[1] + adjustments[2];
                min_operations = min(min_operations, operations);
            }
        }
        
        cout << min_operations << endl;
    }
    
    return 0;
}

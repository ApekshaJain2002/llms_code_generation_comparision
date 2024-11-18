#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        unordered_map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int maxFreq = 0;
        for (auto &entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }
        
        int operations = 0, remaining = n - maxFreq;
        while (remaining > 0) {
            operations++;          // Clone operation
            int increase = min(maxFreq, remaining);
            operations += increase; // Swap operations
            maxFreq += increase;
            remaining -= increase;
        }
        
        cout << operations << endl;
    }

    return 0;
}

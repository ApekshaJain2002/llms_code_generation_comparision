#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int min_operations(int n, const vector<int>& a) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        freq[a[i]]++;
    }
    
    int max_freq = 0;
    for (auto& pair : freq) {
        max_freq = max(max_freq, pair.second);
    }

    return n - max_freq;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << min_operations(n, a) << endl;
    }
    return 0;
}

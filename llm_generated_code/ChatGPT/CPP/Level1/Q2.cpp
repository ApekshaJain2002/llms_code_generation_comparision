#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperations(vector<int>& a) {
    int oddCount = 0, evenCount = 0;
    for (int num : a) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    // The minimum number of operations needed to make all elements have the same parity
    // is the minimum of converting all to even or all to odd
    return min(oddCount, evenCount);
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
        cout << minOperations(a) << endl;
    }
    return 0;
}

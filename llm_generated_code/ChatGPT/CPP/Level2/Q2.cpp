#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& jewels) {
    int oddCount = 0, evenCount = 0;
    for (int power : jewels) {
        if (power % 2 == 0) {
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
        vector<int> jewels(n);
        for (int i = 0; i < n; ++i) {
            cin >> jewels[i];
        }
        cout << minOperations(jewels) << endl;
    }
    return 0;
}

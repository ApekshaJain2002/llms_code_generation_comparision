#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t, n;
    cin >> t;  // Read number of test cases

    while (t--) {
        cin >> n;  // Read array size
        int a[n];
        
        for (int i = 0; i < n; i++)
            cin >> a[i];  // Read array elements
        
        sort(a, a + n);  // Sort the array
        
        int ans = INT_MAX;
        
        // Calculate the minimum difference between every third element and the first in sorted array
        for (int i = 2; i < n; i++) {
            ans = min(ans, a[i] - a[i - 2]);
        }
        
        cout << ans << endl;  // Output the result for each test case
    }

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;  // Read the number of test cases

    while (t--) {
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  // Read array elements
        }

        int ct = 0;
        sort(arr, arr + n);  // Sort the array to check for duplicates

        // Check if there are any consecutive duplicate elements
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {  // If duplicate found, output "NO" and break
                cout << "NO" << endl;
                break;
            } else {
                ct++;
            }
        }

        // If all elements are unique, output "YES"
        if (ct == n - 1)
            cout << "YES" << endl;
    }

    return 0;
}

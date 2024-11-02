#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ct = 0;
        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                cout << "NO" << endl;
                break;
            } else {
                ct++;
            }
        }

        if (ct == n - 1)
            cout << "YES" << endl;
    }

    return 0;
}


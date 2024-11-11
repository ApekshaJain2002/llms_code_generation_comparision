#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int find_k(int n, vector<int>& arr) {
    int diff = arr[1] - arr[0];
    for (int i = 2; i < n; ++i) {
        diff = gcd(diff, arr[i] - arr[0]);
    }
    return diff;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << find_k(n, arr) << endl;
    }
    return 0;
}

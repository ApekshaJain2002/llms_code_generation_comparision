#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> cubes(n);
        for (int i = 0; i < n; i++) {
            cin >> cubes[i];
        }

        sort(cubes.begin(), cubes.end(), greater<int>());

        if (k >= f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
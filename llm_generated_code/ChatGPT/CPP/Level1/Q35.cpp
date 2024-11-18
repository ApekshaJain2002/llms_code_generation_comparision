#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, f;
        cin >> n >> k >> f;
        vector<int> cubes(n);
        for (int i = 0; i < n; ++i) {
            cin >> cubes[i];
        }

        vector<int> sorted_cubes = cubes;
        sort(sorted_cubes.rbegin(), sorted_cubes.rend());

        int favorite_value = cubes[f - 1];
        int top_k_value = sorted_cubes[k - 1];

        if (favorite_value > top_k_value) {
            cout << "NO" << endl;
        } else if (favorite_value < top_k_value) {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}

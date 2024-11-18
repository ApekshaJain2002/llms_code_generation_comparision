#include <iostream>
#include <vector>
using namespace std;

int count_combinations(int n, int k) {
    int count = 0;
    for (int i = 0; i < (1 << k); ++i) {
        int sum = 0;
        for (int j = 0; j < k; ++j) {
            if (i & (1 << j)) {
                sum += (1 << j);
            }
        }
        if (sum <= n) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << count_combinations(n, k) << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        long long n;
        cin >> k >> n;

        int ways = 0;

        for (int i = 0; i < (1 << k); i++) {
            long long sum = 0;
            for (int j = 0; j < k; j++) {
                if (i & (1 << j)) {
                    sum += (1LL << j);
                }
            }
            if (sum <= n) {
                ways++;
            }
        }

        cout << ways << endl;
    }

    return 0;
}

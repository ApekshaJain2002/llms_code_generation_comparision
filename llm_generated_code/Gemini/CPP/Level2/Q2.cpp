#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperations(vector<int>& a) {
    int n = a.size();
    int evenCount = 0, oddCount = 0;

    for (int num : a) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    int targetParity = evenCount > oddCount ? 0 : 1; // 0 for even, 1 for odd

    int operations = 0;
    while (true) {
        int minOppositeParity = INT_MAX;
        int minTargetParity = INT_MAX;
        int oppositeParityIndex = -1, targetParityIndex = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != targetParity) {
                if (a[i] < minOppositeParity) {
                    minOppositeParity = a[i];
                    oppositeParityIndex = i;
                }
            } else {
                if (a[i] < minTargetParity) {
                    minTargetParity = a[i];
                    targetParityIndex = i;
                }
            }
        }

        if (oppositeParityIndex == -1 || targetParityIndex == -1) {
            break;
        }

        a[oppositeParityIndex] += a[targetParityIndex];
        operations++;
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = minOperations(a);
        cout << result << endl;
    }

    return 0;
}

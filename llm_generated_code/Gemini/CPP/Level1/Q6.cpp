#include <iostream>
#include <vector>

using namespace std;

int countLiars(const vector<int>& claims) {
    int n = claims.size();

    // Check for trivial cases
    for (int li : claims) {
        if (li == 0) return 0;
        if (li == n) return n - 1;
    }

    // Iterate through possible number of liars
    for (int x = 1; x < n; ++x) {
        int liarCount = 0;
        for (int li : claims) {
            if (li >= x) liarCount++;
        }
        if (liarCount == x) return x;
    }

    // If no consistent solution is found, the claims are contradictory
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> claims(n);
        for (int i = 0; i < n; ++i) {
            cin >> claims[i];
        }

        int liars = countLiars(claims);
        if (liars == -1) {
            cout << "impossible" << endl;
        } else {
            cout << liars << endl;
        }
    }

    return 0;
}

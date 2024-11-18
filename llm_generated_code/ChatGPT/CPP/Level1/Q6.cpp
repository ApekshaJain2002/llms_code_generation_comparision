#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to determine the number of liars
int findLiars(vector<int>& claims) {
    int n = claims.size();
    
    // Sort the claims
    sort(claims.begin(), claims.end());

    for (int liars = 0; liars <= n; ++liars) {
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (claims[i] >= liars) {
                ++count;
            }
        }
        if (count == liars) {
            return liars;
        }
    }
    
    return -1; // Contradiction
}

// Main function to handle multiple test cases
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
        int result = findLiars(claims);
        if (result != -1) {
            cout << result << endl;
        } else {
            cout << "Contradiction" << endl;
        }
    }
    return 0;
}

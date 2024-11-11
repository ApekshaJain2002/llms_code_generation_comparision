#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_liars(vector<int>& claims) {
    int n = claims.size();
    
    // Sort the claims
    sort(claims.begin(), claims.end());

    for (int liars = 0; liars <= n; ++liars) {
        int count = 0;
        for (int claim : claims) {
            if (claim >= liars) {
                count++;
            }
        }
        if (count == liars) {
            return liars;
        }
    }
    
    return -1;  // Contradiction
}

int main() {
    int t;
    cin >> t;
    vector<int> results;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> claims(n);
        for (int i = 0; i < n; ++i) {
            cin >> claims[i];
        }
        int result = find_liars(claims);
        if (result != -1) {
            results.push_back(result);
        } else {
            results.push_back(-1); // Representing "Contradiction"
        }
    }
    
    for (int result : results) {
        if (result == -1) {
            cout << "Contradiction" << endl;
        } else {
            cout << result << endl;
        }
    }
    
    return 0;
}

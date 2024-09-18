#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 3; // Position in the Fibonacci sequence

    int prev2 = 1; // (n-2)th Fibonacci number
    int prev = 1;  // (n-1)th Fibonacci number

    // Compute the nth Fibonacci number
    for (int i = 2; i <= n; i++) {
        int cur_i = prev2 + prev;
        prev2 = prev;
        prev = cur_i;
    }
    
    cout << prev; // Output the nth Fibonacci number
    return 0;
}

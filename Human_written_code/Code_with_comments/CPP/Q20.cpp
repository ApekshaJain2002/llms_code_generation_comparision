#include<bits/stdc++.h>

using namespace std;

// Function to calculate x raised to the power n
double myPow(double x, int n) {
  double ans = 1.0;  // Initialize result
  long long nn = n;  // Handle negative power case

  if (nn < 0) nn = -1 * nn;  // Convert to positive for easier handling

  while (nn) {
    if (nn % 2) {
      ans = ans * x;  // Multiply result by x if n is odd
      nn = nn - 1;    // Decrease n
    } else {
      x = x * x;      // Square the base if n is even
      nn = nn / 2;    // Halve the exponent
    }
  }
  
  if (n < 0) ans = 1.0 / ans;  // Invert result if original n was negative

  return ans;  // Return the final result
}

int main() {
  cout << myPow(2, 10) << endl;  // Example usage
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of force vectors
    int x[n], y[n], z[n];

    // Read the components of each vector
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int sum1 = 0, sum2 = 0, sum3 = 0;

    // Calculate the sum of components in each direction
    for (int i = 0; i < n; i++) {
        sum1 += x[i];
        sum2 += y[i];
        sum3 += z[i];
    }

    // Check if the vector sum is zero in all directions
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES" << endl;  // The forces are in equilibrium
    else
        cout << "NO" << endl;   // The forces are not in equilibrium

    return 0;
}

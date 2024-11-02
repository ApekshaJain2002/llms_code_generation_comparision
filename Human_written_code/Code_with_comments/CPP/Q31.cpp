#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int a, b;
        cin >> a >> b;  // Read two integers

        // Check if the sum of a and b is even or odd
        if ((a + b) % 2 == 0)
            cout << "Bob" << endl;  // Output "Bob" if sum is even
        else
            cout << "Alice" << endl;  // Output "Alice" if sum is odd
    }

    return 0;
}

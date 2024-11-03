#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> baskets = {3, 0, 5, 0, 7};  // Example basket counts for the 5 children
    vector<int> result;

    // Move baskets with balls to the result vector
    for (int basket : baskets) {
        if (basket > 0) {
            result.push_back(basket);
        }
    }

    // Add empty baskets to the end
    for (int basket : baskets) {
        if (basket == 0) {
            result.push_back(basket);
        }
    }

    // Output the result
    cout << "Baskets arranged: ";
    for (int balls : result) {
        cout << balls << " ";
    }
    cout << endl;

    return 0;
}


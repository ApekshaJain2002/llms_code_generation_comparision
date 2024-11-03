#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> chocolates = {5, 2, 12, 20, 1};
    int max_chocolates = chocolates[0];

    // Time complexity: O(n)
    // Space complexity: O(1)
    // Lines of code: 6
    // Cyclomatic complexity: 2
    for (int i = 1; i < chocolates.size(); i++) {
        if (chocolates[i] > max_chocolates) {
            max_chocolates = chocolates[i];
        }
    }

    cout << "The highest number of chocolates is: " << max_chocolates << endl;

    return 0;
}

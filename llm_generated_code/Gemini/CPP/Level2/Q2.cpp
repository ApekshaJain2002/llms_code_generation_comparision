#include <iostream>
#include <vector>

using namespace std;

void rearrangeBaskets(vector<int>& baskets) {
    int n = baskets.size();
    int j = 0;  // Pointer to the next position for non-empty baskets

    // Time complexity: O(n)
    // Space complexity: O(1)
    // Lines of code: 8
    // Cyclomatic complexity: 2
    for (int i = 0; i < n; i++) {
        if (baskets[i] != 0) {
            swap(baskets[i], baskets[j]);
            j++;
        }
    }
}

int main() {
    vector<int> baskets = {2, 0, 1, 0, 3};
    rearrangeBaskets(baskets);

    for (int i = 0; i < baskets.size(); i++) {
        cout << baskets[i] << " ";
    }
    cout << endl;

    return 0;
}

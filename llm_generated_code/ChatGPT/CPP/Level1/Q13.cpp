#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxNonAdjacentSum(const vector<int>& arr, int start, int end) {
    int prev2 = 0;
    int prev1 = 0;

    for (int i = start; i <= end; i++) {
        int includeCurrent = arr[i] + prev2;
        int excludeCurrent = prev1;
        int current = max(includeCurrent, excludeCurrent);

        // Update for the next iteration
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int maxCircularNonAdjacentSum(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0]; // If only one element, that's the max sum

    // Case 1: Include first element, exclude last
    int case1 = maxNonAdjacentSum(arr, 0, n - 2);

    // Case 2: Exclude first element, include last
    int case2 = maxNonAdjacentSum(arr, 1, n - 1);

    return max(case1, case2);
}

int main() {
    vector<int> arr = {5, 5, 10, 100, 10, 5}; // Example array
    cout << "Maximum sum of non-adjacent elements: " << maxCircularNonAdjacentSum(arr) << endl;
    return 0;
}


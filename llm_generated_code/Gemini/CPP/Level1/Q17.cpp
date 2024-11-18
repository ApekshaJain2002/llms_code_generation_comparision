#include <iostream>
#include <vector>

using namespace std;

void findMaxSubarray(const vector<int>& arr) {
    int n = arr.size();
    int maxSum = arr[0], currentSum = arr[0];
    int start = 0, end = 0, s = 0;

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = s;
            end = i;
        }
        if (currentSum < 0) {
            currentSum = 0;
            s = i + 1;
        }
    }

    cout << "Maximum sum: " << maxSum << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    findMaxSubarray(arr);
    return 0;
}
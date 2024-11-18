#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int>& arr, int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : arr) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;
    int missingNumber = findMissingNumber(arr, n);
    cout << "Missing number: " << missingNumber << endl;
    return 0;
}
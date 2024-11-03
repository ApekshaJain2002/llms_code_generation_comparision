#include <iostream>
#include <vector>
using namespace std;

int findPeak(const vector<int>& mountains) {
    int n = mountains.size();

    if (n == 0) return -1;  // No mountains in the range

    for (int i = 0; i < n; i++) {
        // Check if the current mountain is a peak
        if ((i == 0 || mountains[i] > mountains[i - 1]) &&
            (i == n - 1 || mountains[i] > mountains[i + 1])) {
            return mountains[i];
        }
    }

    return -1;  // No peak found, though with valid input, this case shouldn't occur
}

int main() {
    vector<int> mountains = {1, 3, 20, 4, 1, 0};  // Example heights

    int peak = findPeak(mountains);

    if (peak != -1) {
        cout << "One of the peaks in the mountain range has a height of: " << peak << endl;
    } else {
        cout << "No peak found in the mountain range." << endl;
    }

    return 0;
}


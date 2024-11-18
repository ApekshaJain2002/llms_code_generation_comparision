#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(const vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // If the middle element is less than its next element,
        // then the peak must be in the right half
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        }
        // Otherwise, the peak is in the left half or could be the middle element itself
        else {
            right = mid;
        }
    }

    // At the end of the while loop, left and right will converge to the peak element index
    return left;
}

int main() {
    vector<int> arr = {1, 3, 20, 4, 1, 0}; // Example array
    int peakIndex = findPeakElement(arr);
    cout << "Index of a peak element: " << peakIndex << endl;
    return 0;
}


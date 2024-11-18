#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(const vector<int>& nums) {
    int n = nums.size();

    // Handle edge cases: first and last elements
    if (n == 1) {
        return 0;
    } else if (nums[0] > nums[1]) {
        return 0;
    } else if (nums[n - 1] > nums[n - 2]) {
        return n - 1;
    }

    // Binary search approach
    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        } else if (nums[mid] < nums[mid - 1]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1; // No peak element found
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int peakIndex = findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;

    return 0;
}

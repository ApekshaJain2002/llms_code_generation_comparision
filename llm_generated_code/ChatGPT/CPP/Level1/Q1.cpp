#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(const vector<int>& nums) {
    int maxCount = 0, currentCount = 0;
    for (int num : nums) {
        if (num == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << maxConsecutiveOnes(nums) << endl;
    return 0;
}

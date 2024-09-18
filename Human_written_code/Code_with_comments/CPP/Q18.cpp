#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    // Find the maximum number of consecutive 1s
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;   // Count of current streak of 1s
        int maxi = 0;  // Maximum length of consecutive 1s

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++; // Increase count for consecutive 1s
            } else {
                cnt = 0; // Reset count when encountering 0
            }

            maxi = max(maxi, cnt); // Update maximum length
        }

        return maxi; // Return the maximum length found
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are " << ans; // Output result
    return 0;
}

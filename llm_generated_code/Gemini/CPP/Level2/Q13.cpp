#include <iostream>
#include <vector>

using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return nums[0];
    }

    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp[n - 1];
}

int robCircular(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }

    vector<int> nums1(nums.begin(), nums.end() - 1);
    vector<int> nums2(nums.begin() + 1, nums.end());

    return max(rob(nums1), rob(nums2));
}

int main() {
    vector<int> nums = {2, 3, 2};
    int maxMoney = robCircular(nums);
    cout << "Maximum money robbed: " << maxMoney << endl;

    return 0;
}

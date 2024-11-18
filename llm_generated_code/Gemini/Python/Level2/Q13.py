def rob_circular(nums):
    """
    Calculates the maximum amount that can be robbed from a circular array of houses.

    Args:
        nums: A list of integers representing the amount of money in each house.

    Returns:
        The maximum amount that can be robbed.
    """

    n = len(nums)
    if n == 1:
        return nums[0]
    if n == 2:
        return max(nums[0], nums[1])

    nums1 = nums[:-1]
    nums2 = nums[1:]

    def rob_linear(nums):
        n = len(nums)
        dp = [0] * n
        dp[0] = nums[0]
        dp[1] = max(nums[0], nums[1])
        for i in range(2, n):
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i])
        return dp[-1]

    return max(rob_linear(nums1), rob_linear(nums2))

# Example usage:
nums = [2, 3, 2]
result = rob_circular(nums)
print("Maximum amount that can be robbed:", result)  # Output: 3

def rob_linear(nums):
    prev = curr = 0
    for num in nums:
        prev, curr = curr, max(curr, prev + num)
    return curr

def rob_circular(nums):
    n = len(nums)
    if n == 1:
        return nums[0]

    # Scenario 1: Rob from house 0 to house n-2 (excluding the last house)
    max_money1 = rob_linear(nums[:-1])
    # Scenario 2: Rob from house 1 to house n-1 (excluding the first house)
    max_money2 = rob_linear(nums[1:])

    # Maximum money robbed will be the maximum of the two scenarios
    return max(max_money1, max_money2)

# Example usage
houses = [2, 3, 2]
print("Maximum amount the thief can rob:", rob_circular(houses))


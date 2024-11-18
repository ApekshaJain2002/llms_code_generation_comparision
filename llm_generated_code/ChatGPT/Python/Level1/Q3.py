def sort_colors(nums):
    # Initialize pointers for the current element, 0 (low), and 2 (high)
    low, mid, high = 0, 0, len(nums) - 1
    
    while mid <= high:
        if nums[mid] == 0:
            # Swap the mid element with the low element
            nums[low], nums[mid] = nums[mid], nums[low]
            low += 1
            mid += 1
        elif nums[mid] == 1:
            # Move the mid pointer up
            mid += 1
        else:
            # Swap the mid element with the high element
            nums[high], nums[mid] = nums[mid], nums[high]
            high -= 1
    
    return nums


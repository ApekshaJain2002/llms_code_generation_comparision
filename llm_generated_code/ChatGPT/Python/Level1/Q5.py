
def find_peak_element(nums):
    low, high = 0, len(nums) - 1

    while low < high:
        mid = (low + high) // 2
        if nums[mid] > nums[mid + 1]:
            # This means the peak is on the left side including mid
            high = mid
        else:
            # This means the peak is on the right side excluding mid
            low = mid + 1

    return low  # low and high will eventually converge

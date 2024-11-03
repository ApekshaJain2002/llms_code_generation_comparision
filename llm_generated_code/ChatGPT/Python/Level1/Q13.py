def max_non_adjacent_sum(arr):
    def max_sum_linear(nums):
        # Helper function to find max sum of non-adjacent elements in a linear array
        incl = 0  # Sum including the current element
        excl = 0  # Sum excluding the current element

        for num in nums:
            # Current max excluding the current element
            new_excl = max(incl, excl)

            # Current max including the current element
            incl = excl + num
            excl = new_excl

        return max(incl, excl)

    n = len(arr)
    if n == 1:
        return arr[0]

    # Case 1: Exclude the first element
    max_excluding_first = max_sum_linear(arr[1:])
    
    # Case 2: Exclude the last element
    max_excluding_last = max_sum_linear(arr[:-1])

    # Return the maximum of both cases
    return max(max_excluding_first, max_excluding_last)


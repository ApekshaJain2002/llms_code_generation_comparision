def solve(str: str) -> int:
    if len(str) == 0:
        return 0
    maxans = -1
    for i in range(len(str)):  # outer loop for traversing the string
        set = {}
        # nested loop for getting different string starting with str[i]
        for j in range(i, len(str)):
            if str[j] in set:  # if element if found so mark it as ans and break from the loop
                maxans = max(maxans, j - i)
                break
            set[str[j]] = 1
    return maxans


if __name__ == "__main__":
    str = "takeUforward"
    print("The length of the longest substring without repeating characters is", solve(str))

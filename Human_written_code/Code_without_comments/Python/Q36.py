def solve(str: str) -> int:
    if len(str) == 0:
        return 0
    maxans = -1
    for i in range(len(str)):  
        set = {}
        for j in range(i, len(str)):
            if str[j] in set:  
                maxans = max(maxans, j - i)
                break
            set[str[j]] = 1
    return maxans
if __name__ == "__main__":
    str = "takeUforward"
    print("The length of the longest substring without repeating characters is", solve(str))

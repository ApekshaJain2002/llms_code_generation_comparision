def main():
    # Read the number of test cases
    t = int(input().strip())
    
    # Loop through each test case
    for _ in range(t):
        # Read the length of the string (not actually used in Python version)
        n = int(input().strip())
        
        # Define target strings in lowercase and uppercase for easy comparison
        target = "meow"
        
        # Read the input string
        s = input().strip()
        
        # Initialize counter variable to track if the pattern matches
        cnt = 0
        
        # Check if the string starts with 'm' or 'M' and ends with 'w' or 'W'
        if (s[0] not in ('m', 'M')) or (s[-1] not in ('w', 'W')):
            cnt = -1
        else:
            j = 0  # Index for the 'meow' target string
            for i in range(1, n):
                # If the current character does not match the target character, move to the next character in 'meow'
                if s[i].lower() != target[j]:
                    j += 1
                    # If we have gone past the end of 'meow' pattern, break out
                    if j >= len(target):
                        cnt = -1
                        break
                
                # If character still doesn't match after moving to the next character in 'meow', it's invalid
                if s[i].lower() != target[j]:
                    cnt = -1
                    break
        
        # Output result based on the cnt value
        if cnt == -1:
            print("NO")
        else:
            print("YES")

if __name__ == "__main__":
    main()

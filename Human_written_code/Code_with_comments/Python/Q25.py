def main():
    # Read input string and remove any leading or trailing whitespace
    s = input().strip()
    n = len(s)  # Get the length of the string
    flag = False  # Initialize a flag to indicate if the string is symmetrical
    check = True  # A flag to check if all characters are allowed symmetrical letters
    
    # Check if all characters are in the set of allowed symmetrical letters
    for char in s:
        if char not in {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'}:
            check = False  # Set check to False if any character is not symmetrical
            break  # Exit the loop if an invalid character is found

    if check:
        # Reverse the string and check if it matches the original
        t = s[::-1]
        flag = (s == t)  # Set flag to True if the string is the same as its reverse
    
    # Print "YES" if the string is symmetrical and contains only allowed characters, otherwise "NO"
    if flag:
        print("YES")
    else:
        print("NO")

# Entry point of the script
if __name__ == "__main__":
    main()

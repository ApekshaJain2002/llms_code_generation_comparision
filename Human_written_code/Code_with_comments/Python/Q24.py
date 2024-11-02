def main():
    # Read input string and remove any leading or trailing whitespace
    s1 = input().strip()
    
    # Initialize a counter to track consecutive identical characters
    condition = 1

    # Iterate through the string from the second character onward
    for i in range(1, len(s1)):
        # Check if the current character is the same as the previous one
        if s1[i] == s1[i - 1]:
            # Increase the consecutive character counter
            condition += 1
            # If we reach 7 consecutive identical characters, print "YES" and exit
            if condition == 7:
                print("YES")
                return
        else:
            # Reset the counter if the characters are not consecutive
            condition = 1

    # If no sequence of 7 consecutive identical characters is found, print "NO"
    print("NO")

# Entry point of the script
if __name__ == "__main__":
    main()

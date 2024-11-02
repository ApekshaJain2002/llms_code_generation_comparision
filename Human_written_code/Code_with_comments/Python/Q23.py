def main():
    # Read input string and remove any leading/trailing whitespace
    s = input().strip()
    
    # Initialize result to store the final output and count to track consecutive characters
    result = 0
    count = 1  # Start with a count of 1 for the first character

    # Iterate through the string from the second character to the end
    for i in range(1, len(s)):
        # If the current character is the same as the previous one, increase the count
        if s[i] == s[i - 1]:
            count += 1
        else:
            # If characters change, calculate the required groups for the current sequence
            result += (count + 4) // 5
            count = 1  # Reset count for the new character sequence

    # Add the remaining groups for the last sequence in the string
    result += (count + 4) // 5
    print(result)  # Print the final result

# Entry point of the script
if __name__ == "__main__":
    main()

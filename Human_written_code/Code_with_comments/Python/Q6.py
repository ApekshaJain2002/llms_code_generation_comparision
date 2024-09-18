def reverse_words(s):
    # Initialize pointers and result variables
    left = 0
    right = len(s) - 1
    temp = ""
    ans = ""
    
    # Iterate through the string and build words
    while left <= right:
        ch = s[left]
        if ch != ' ':
            # Append characters to temp to form a word
            temp += ch
        elif ch == ' ':
            # If a space is encountered, add the current word to the result
            if ans:
                ans = temp + " " + ans
            else:
                ans = temp
            temp = ""  # Reset temp for the next word
        left += 1
    
    # Add the last word to the result (if any)
    if temp:
        if ans:
            ans = temp + " " + ans
        else:
            ans = temp
    
    return ans

# Main function to test the reverse_words function
def main():
    st = "TUF is great for interview preparation"
    print("Before reversing words:")
    print(st)
    print("After reversing words:")
    print(reverse_words(st))

# Run the main function
if __name__ == "__main__":
    main()

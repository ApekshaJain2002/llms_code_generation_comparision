def reverse_words(s):
    # Split the string into a list of words
    words = s.split()
    
    # Reverse the list of words
    reversed_words = words[::-1]
    
    # Join the reversed list back into a single string with spaces
    reversed_string = ' '.join(reversed_words)
    
    return reversed_string


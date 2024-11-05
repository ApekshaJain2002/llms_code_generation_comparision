def convert_case(word):
    lower_count = sum(1 for c in word if c.islower())
    upper_count = sum(1 for c in word if c.isupper())
    return word.lower() if lower_count >= upper_count else word.upper()

word = input()
result = convert_case(word)
print(result)

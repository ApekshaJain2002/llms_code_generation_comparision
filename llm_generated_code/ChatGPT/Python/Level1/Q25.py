def is_mirror_word(word):
    valid_chars = set("AHIMOTUVWXY")
    return "YES" if word == word[::-1] and all(c in valid_chars for c in word) else "NO"

word = input()
result = is_mirror_word(word)
print(result)

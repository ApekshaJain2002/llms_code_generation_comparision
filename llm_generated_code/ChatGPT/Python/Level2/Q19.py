def are_anagrams(code1, code2):
    return sorted(code1) == sorted(code2)

code1 = "listen"
code2 = "silent"
print(are_anagrams(code1, code2))

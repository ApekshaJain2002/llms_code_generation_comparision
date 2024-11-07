def convert_case(word):
    lowercase_count = 0
    uppercase_count = 0
    for char in word:
        if char.islower():
            lowercase_count += 1
        else:
            uppercase_count += 1
    return word.lower() if lowercase_count >= uppercase_count else word.upper()

def main():
    word = input()
    print(convert_case(word))

if __name__ == "__main__":
    main()

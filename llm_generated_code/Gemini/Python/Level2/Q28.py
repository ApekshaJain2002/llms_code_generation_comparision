def normalize_word(word):
    upper_count = sum(1 for c in word if c.isupper())
    lower_count = len(word) - upper_count
    if upper_count > lower_count:
        return word.upper()
    else:
        return word.lower()

def main():
    word = input()
    print(normalize_word(word))

if __name__ == "__main__":
    main()

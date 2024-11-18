def is_mirror_word(word):
    return word == word[::-1]

def main():
    word = input()
    print("YES" if is_mirror_word(word) else "NO")

if __name__ == "__main__":
    main()

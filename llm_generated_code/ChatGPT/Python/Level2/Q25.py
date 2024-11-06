def main():
    word = input().strip()
    mirror_letters = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'}
    if all(letter in mirror_letters for letter in word) and word == word[::-1]:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()

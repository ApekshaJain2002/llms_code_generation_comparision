def main():
    word = input()
    lowercase_count = sum(1 for c in word if c.islower())
    uppercase_count = len(word) - lowercase_count
    
    if lowercase_count >= uppercase_count:
        print(word.lower())
    else:
        print(word.upper())

if __name__ == "__main__":
    main()

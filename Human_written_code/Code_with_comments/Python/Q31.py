def main():
    t = int(input().strip())
    
    for _ in range(t):
        s = input().strip()
        char_count = {}
        
        # Count occurrences of each character
        for char in s:
            char_count[char] = char_count.get(char, 0) + 1

        # Determine output based on the conditions
        if len(char_count) >= 3:
            print(4)
        elif len(char_count) == 2 and any(count == 2 for count in char_count.values()):
            print(4)
        elif len(char_count) == 2:
            print(6)
        else:
            print(-1)

if __name__ == "__main__":
    main()

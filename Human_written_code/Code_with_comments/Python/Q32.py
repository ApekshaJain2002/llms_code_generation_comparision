def main():
    t = int(input().strip())
    
    for _ in range(t):
        n = int(input().strip())
        s = input().strip().lower()
        
        # Remove consecutive duplicate characters
        s = ''.join([s[i] for i in range(len(s)) if i == 0 or s[i] != s[i - 1]])
        
        # Check if the transformed string equals "meow"
        print("YES" if s == "meow" else "NO")

if __name__ == "__main__":
    main()

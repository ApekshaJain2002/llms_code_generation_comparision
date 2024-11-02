def main():
    s = input().strip()
    countup = sum(1 for char in s if char.isupper())
    countlow = len(s) - countup  
    if countup > countlow:
        print(s.upper())
    else:
        print(s.lower())
if __name__ == "__main__":
    main()

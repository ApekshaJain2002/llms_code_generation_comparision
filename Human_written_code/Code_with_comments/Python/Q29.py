def main():
    t = int(input().strip())  # Read the number of test cases

    for _ in range(t):
        n = int(input().strip())  # Read the number of elements in the array
        arr = set()  # Use a set to store unique elements

        duplicate_found = False
        for _ in range(n):
            inp = int(input().strip())  # Read each element
            if not duplicate_found:
                if inp not in arr:
                    arr.add(inp)  # Add to set if not seen before
                else:
                    duplicate_found = True  # Mark if a duplicate is found

        # Output "NO" if duplicate was found, otherwise "YES"
        print("NO" if duplicate_found else "YES")

if __name__ == "__main__":
    main()

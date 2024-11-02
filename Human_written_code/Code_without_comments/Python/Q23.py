def main():
    s = input().strip()
    result = 0
    count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            result += (count + 4) // 5
            count = 1

    result += (count + 4) // 5
    print(result)

if __name__ == "__main__":
    main()

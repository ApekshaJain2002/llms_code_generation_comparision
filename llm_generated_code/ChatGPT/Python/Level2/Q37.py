def main():
    for _ in range(int(input())):
        s = input()
        n = len(s)
        count_0 = s.count('0')
        count_1 = s.count('1')
        result = min(count_0, count_1)
        print(result)

if __name__ == "__main__":
    main()

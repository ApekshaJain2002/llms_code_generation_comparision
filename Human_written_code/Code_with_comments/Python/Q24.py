def main():
    s1 = input().strip()
    condition = 1

    for i in range(1, len(s1)):
        if s1[i] == s1[i - 1]:
            condition += 1
            if condition == 7:
                print("YES")
                return
        else:
            condition = 1

    print("NO")

if __name__ == "__main__":
    main()

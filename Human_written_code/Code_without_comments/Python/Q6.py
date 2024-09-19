def reverse_words(s):
    left = 0
    right = len(s) - 1
    temp = ""
    ans = ""
    while left <= right:
        ch = s[left]
        if ch != ' ':
            temp += ch
        elif ch == ' ':
            if ans:
                ans = temp + " " + ans
            else:
                ans = temp
            temp = ""  
        left += 1
    if temp:
        if ans:
            ans = temp + " " + ans
        else:
            ans = temp
    return ans
def main():
    st = "TUF is great for interview preparation"
    print("Before reversing words:")
    print(st)
    print("After reversing words:")
    print(reverse_words(st))
if __name__ == "__main__":
    main()

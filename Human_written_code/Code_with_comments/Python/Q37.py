def isValid(s: str) -> bool:
    st = []  # Stack to store opening brackets
    for it in s:
        # Push opening brackets onto the stack
        if it == '(' or it == '{' or it == '[':
            st.append(it)
        else:
            # If stack is empty and a closing bracket is encountered, it's invalid
            if len(st) == 0:
                return False
            ch = st[-1]  # Check the top element of the stack
            st.pop()  # Remove the top element
            # Check if the closing bracket matches the top opening bracket
            if (it == ')' and ch == '(') or (it == ']' and ch == '[') or (it == '}' and ch == '{'):
                continue
            else:
                return False
    # If the stack is empty, all brackets are matched; otherwise, it's invalid
    return len(st) == 0

if __name__ == '__main__':
    s = "()[{}()]"
    # Output result based on the validity of the string
    if isValid(s):
        print("True")
    else:
        print("False")

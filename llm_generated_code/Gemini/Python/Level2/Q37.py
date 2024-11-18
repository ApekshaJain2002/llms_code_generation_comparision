<<<<<<< HEAD
def is_balanced(s):
    stack = []
    mapping = {')': '(', '}': '{', ']': '['}

    for char in s:
        if char in ['(', '{', '[']:
            stack.append(char)
        elif char in [')', '}', ']']:
            if not stack or stack.pop() != mapping[char]:
                return False

    return not stack
=======
def min_coins(s):
    n = len(s)
    count = 0
    for i in range(n):
        if s[i] == '1':
            count += 1
    return min(count, n - count)

t = int(input())
for _ in range(t):
    s = input()
    print(min_coins(s))
>>>>>>> 5c97457de138fe480f391df5982345a36a29fe2e

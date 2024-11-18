import re

def is_meow_sound(s):
    return bool(re.fullmatch(r'[mM]+[eE]+[oO]+[wW]+', s))

t = int(input())
results = []
for _ in range(t):
    n = int(input())
    s = input().strip()
    results.append("YES" if is_meow_sound(s) else "NO")
print("\n".join(results))

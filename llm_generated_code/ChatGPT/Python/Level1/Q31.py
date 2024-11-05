def game_winner(a, b):
    return "Alice" if min(a, b) % 2 == 1 else "Bob"

t = int(input())
results = []
for _ in range(t):
    a, b = map(int, input().split())
    results.append(game_winner(a, b))
print("\\n".join(results))

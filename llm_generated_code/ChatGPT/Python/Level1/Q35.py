def process_test_cases(t, test_cases):
    for case in test_cases:
        n, k, f, cubes = case
        sorted_cubes = sorted(cubes, reverse=True)
        favorite_cube = cubes[f]
        top_k_cubes = sorted_cubes[:k]
        
        if favorite_cube in top_k_cubes:
            print("YES")
        elif favorite_cube not in sorted_cubes[:k]:
            print("NO")
        else:
            print("MAYBE")

t = int(input())
test_cases = []
for _ in range(t):
    n, k, f = map(int, input().split())
    cubes = list(map(int, input().split()))
    test_cases.append((n, k, f, cubes))

process_test_cases(t, test_cases)

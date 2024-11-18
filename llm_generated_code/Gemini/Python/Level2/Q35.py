def will_favorite_cube_be_removed(n, f, cubes, k):
    sorted_cubes = sorted(cubes, reverse=True)
    return "YES" if cubes[f-1] <= sorted_cubes[k-1] else "NO" if cubes[f-1] > sorted_cubes[k] else "MAYBE"

t = int(input())
for _ in range(t):
    n, f, k = map(int, input().split())
    cubes = list(map(int, input().split()))
    print(will_favorite_cube_be_removed(n, f, cubes, k))
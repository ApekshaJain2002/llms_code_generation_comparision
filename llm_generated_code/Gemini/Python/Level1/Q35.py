def will_favorite_cube_be_removed(n, f, k, cubes):
    sorted_cubes = sorted(cubes, reverse=True)
    if sorted_cubes[k - 1] >= cubes[f]:
        return "YES"
    elif sorted_cubes[k] < cubes[f]:
        return "NO"
    else:
        return "MAYBE"

# Input the number of test cases
t = int(input())

for _ in range(t):
    n, f, k = map(int, input().split())
    cubes = list(map(int, input().split()))
    result = will_favorite_cube_be_removed(n, f, k, cubes)
    print(result)
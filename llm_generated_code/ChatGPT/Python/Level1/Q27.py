def is_equilibrium(forces):
    sum_x = sum(force[0] for force in forces)
    sum_y = sum(force[1] for force in forces)
    sum_z = sum(force[2] for force in forces)
    return sum_x == 0 and sum_y == 0 and sum_z == 0

forces = []
n = int(input())
for _ in range(n):
    forces.append(tuple(map(int, input().split())))
result = "YES" if is_equilibrium(forces) else "NO"
print(result)

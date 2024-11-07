def is_equilibrium(forces):
    x_sum, y_sum, z_sum = 0, 0, 0
    for force in forces:
        x_sum += force[0]
        y_sum += force[1]
        z_sum += force[2]
    return x_sum == 0 and y_sum == 0 and z_sum == 0

def main():
    n = int(input())
    forces = []
    for _ in range(n):
        x, y, z = map(int, input().split())
        forces.append((x, y, z))
    print("YES" if is_equilibrium(forces) else "NO")

if __name__ == "__main__":
    main()

def is_equilibrium(forces):
    x, y, z = 0, 0, 0
    for fx, fy, fz in forces:
        x += fx
        y += fy
        z += fz
    return x == 0 and y == 0 and z == 0

def main():
    n = int(input())
    forces = []
    for _ in range(n):
        fx, fy, fz = map(int, input().split())
        forces.append((fx, fy, fz))
    print("YES" if is_equilibrium(forces) else "NO")

if __name__ == "__main__":
    main()

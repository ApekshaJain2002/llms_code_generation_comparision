def main():
    n = int(input())  # Number of forces
    x_sum, y_sum, z_sum = 0, 0, 0
    
    for _ in range(n):
        x, y, z = map(int, input().split())  # Force vector components
        x_sum += x
        y_sum += y
        z_sum += z
    
    if x_sum == 0 and y_sum == 0 and z_sum == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()

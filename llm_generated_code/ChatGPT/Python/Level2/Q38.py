def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        lamps = []
        
        for _ in range(n):
            a, b = map(int, input().split())
            lamps.append((a, b))
        
        lamps.sort(key=lambda x: (x[0], -x[1]))  
        
        total_points = 0
        lit_count = 0
        
        for a, b in lamps:
            if lit_count < a:
                total_points += b
                lit_count += 1
        
        print(total_points)

if __name__ == "__main__":
    main()

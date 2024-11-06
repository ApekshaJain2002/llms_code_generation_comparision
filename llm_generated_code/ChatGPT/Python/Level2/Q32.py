import re

def main():
    t = int(input())  
    for _ in range(t):
        s = input()  
        
        if re.match(r"^[mM]+[eE]+[oO]+[wW]+$", s):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()

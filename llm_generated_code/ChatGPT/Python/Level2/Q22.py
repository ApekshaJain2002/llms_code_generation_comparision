import math

def main():
    t = int(input())
    for _ in range(t):
        a, b, c, d = map(int, input().split())
        gcd_ab = math.gcd(a, b)
        gcd_cd = math.gcd(c, d)
        a, b = a // gcd_ab, b // gcd_ab
        c, d = c // gcd_cd, d // gcd_cd
        if a == c and b == d:
            print(0)
            continue
        claps = 0
        while a != c or b != d:
            if a != c:
                claps += 1
                if a < c:
                    a *= c
                else:
                    c *= a
            if b != d:
                claps += 1
                if b < d:
                    b *= d
                else:
                    d *= b
        print(claps)

if __name__ == "__main__":
    main()

from fractions import Fraction

def min_operations(a, b, c, d):
    frac1 = Fraction(a, b)
    frac2 = Fraction(c, d)
    gcd = frac1.numerator * frac2.denominator
    lcm = frac1.denominator * frac2.numerator
    return max(gcd // frac1.numerator - 1, gcd // frac2.numerator - 1,
               lcm // frac1.denominator - 1, lcm // frac2.denominator - 1)

def main():
    a, b, c, d = map(int, input().split())
    print(min_operations(a, b, c, d))

if __name__ == "__main__":
  main()

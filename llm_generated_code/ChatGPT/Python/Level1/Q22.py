from math import gcd

def min_operations(a, b, c, d):
    lcm = (b * d) // gcd(b, d)
    operations = abs((lcm // b) * a - (lcm // d) * c)
    return operations

a, b = map(int, input().split())
c, d = map(int, input().split())
result = min_operations(a, b, c, d)
print(result)

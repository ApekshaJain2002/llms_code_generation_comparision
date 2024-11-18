def min_claps(a,b,c,d):
    g=gcd(a,c)
    h=gcd(b,d)
    return min(abs(a//g-c//g),abs(b//h-d//h))
def gcd(a,b):
    while b:a,b=b,a%b
    return a
t=int(input())
for _ in range(t):
    a,b,c,d=map(int,input().split())
    print(min_claps(a,b,c,d))

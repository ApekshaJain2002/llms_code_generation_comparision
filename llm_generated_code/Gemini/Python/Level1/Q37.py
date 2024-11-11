def min_coins(s):
    n = len(s)
    if n == 0:
        return 0
    
    count_ones = s.count('1')
    return min(count_ones, n - count_ones)

for _ in range(int(input())):
    s = input()
    print(min_coins(s))

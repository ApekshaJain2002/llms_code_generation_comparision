def cmp(a, b):
    if a[0] != b[0]:
        return a[0] - b[0]
    return b[1] - a[1]

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        v = [tuple(map(int, input().split())) for _ in range(n)]
        v.sort(key=lambda x: (x[0], -x[1]))

        idx, cnt, total = 0, 0, 0
        for p in range(n):
            if p < idx:
                continue
            total += v[p][1]
            cnt += 1
            while idx < n and v[idx][0] <= cnt:
                idx += 1
            cnt = p - idx + 1
            cnt = max(cnt, 0)

        print(total)

if __name__ == "__main__":
    main()
